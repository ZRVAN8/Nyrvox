#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

bool loadConfig(const std::string& module);
bool saveConfig(const std::string& module, const std::string& key, const std::string& value);
std::string getConfig(const std::string& module, const std::string& key);

#endif
