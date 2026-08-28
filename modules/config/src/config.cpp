#include "config.hpp"
#include "logger.hpp"

#include <fstream>
#include <map>
#include <string>
#include <optional>

static std::map<std::string, std::map<std::string, std::string>>configStorage;


std::string getConfigPath(const std::string& module)
{
	std::string path = "configs/" + module +".conf";
	return path;
}

std::optional<std::string> getConfig(const std::string& module, const std::string& key)
{
	auto it1 = configStorage.find(module);
	if (it1 == configStorage.end())
		return std::nullopt;

	auto it2 = it1->second.find(key);
	if (it2 == it1->second.end())
		return std::nullopt;

	return it2->second;
}


bool writeModuleConfig(const std::string& module, std::ofstream& outputFile)
{
	outputFile << "# " + module + " Configuration\n";
	for (const auto& [configKey, configValue] : configStorage[module])
		outputFile << configKey << "=" << configValue << "\n"; 

	return true;
}

bool loadConfig(const std::string& module)
{
	std::string line;
	std::string key;
	std::string value;
	std::string::size_type equalPos;

	//logInfo("CONFIG","Loading configuration...");

	std::ifstream file(getConfigPath(module));
	if(!file.is_open())
	{
		logError("CONFIG","Failed to open configuration file.");
		return false;
	}

	while (std::getline(file, line))
	{
	if (line.empty() || line.front() == '#')
		continue;

	equalPos = line.find('=');
	if (equalPos == std::string::npos)
		continue;

	key = line.substr(0, equalPos);
	value = line.substr(equalPos + 1);

	configStorage[module][key] = value;

	}

	logInfo("CONFIG","Configuration loaded successfully");
	return true;
}

bool saveConfig(const std::string& module, const std::string& key, const std::string& value)
{
	auto mode = getConfig("nyrvox", "mode").value_or("normal");

	if (mode == "normal")
	{
		auto it1 = configStorage.find(module);
		if (it1 == configStorage.end())
		{
			logError("CONFIG","Failed to saved configuration: module not loaded.");
			return false;
		}
		std::ifstream inputFile(getConfigPath(module));
		if (!inputFile.is_open())
		{
			logError("CONFIG","Failed to open configuration file.");
			return false;
		}
		inputFile.close();

		configStorage[module][key] = value;

		std::ofstream outputFile(getConfigPath(module));
		if (outputFile.is_open())
		{
			writeModuleConfig(module, outputFile);
			logInfo("CONFIG","Configuration saved successfully.");
			//std::cout << "Configuration saved successfully\n";
			return true;
		}
		else
		{
			logError("CONFIG","Failed to open configuration file for writing.");
			return false;
		}
	}

	else if (mode == "development")
	{
		configStorage[module][key] = value;
		std::ofstream outputFile(getConfigPath(module));
		if (outputFile.is_open())
		{
			writeModuleConfig(module, outputFile);
			logInfo("CONFIG","Configuration saved susseccfully.");
			return true;
		}

		else
		{
			logError("CONFIG","Failed to configuration file.");
			return false;
		}

	}

	else
		return false;
}

