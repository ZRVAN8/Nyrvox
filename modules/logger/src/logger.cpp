#include "logger.hpp"
#include "config.hpp"

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <fstream>

std::string getCurrentTimestamp()
{
	auto status = getConfig("logger","show_timestamp").value_or("disable");
	if (status == "disable")
		return "no_time";

	auto now = std::chrono::system_clock::now();
	std::time_t t = std::chrono::system_clock::to_time_t(now);
	std::tm tm = *std::localtime(&t);
	std::ostringstream oss;
	oss << std::put_time(&tm, "%Y-%m-%d %H:%M:%S");
	return oss.str();
}

bool logMessage(const std::string& level, const std::string& module, const std::string& message)
{
	auto status = getConfig("logger","enabled").value_or("enable");
	if (status == "disable")
		return true;

	std::string timestamp = getCurrentTimestamp();
	std::string logEntry = "[" + timestamp + "] " + "["+ level +"] " + "[" + module + "] "+ message; 
	//std::cout << logEntry << "\n";
	std::string path = "logs/nyrvox.log";
	std::ofstream outputFile(path, std::ios::app);
	if (outputFile.is_open())
	{
		outputFile << logEntry << "\n";
		return true;
	}
	else
	{
		std::cout << "Failed to write to log file !" << "\n";
		return false;
	}

}

void logInfo(const std::string& module, const std::string& message)
{
	logMessage("INFO", module, message);
}

void logWarning(const std::string& module, const std::string& message)
{
	logMessage("WARNING", module, message);
}

void logError(const std::string& module, const std::string& message)
{
	logMessage("ERROR", module, message);
}

void logDebug(const std::string& module, const std::string& message)
{
	logMessage("DEBUG", module, message);
}
