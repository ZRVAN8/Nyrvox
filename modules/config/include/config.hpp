#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <optional>

bool loadConfig(const std::string& module);
bool saveConfig(const std::string& module, const std::string& key, const std::string& value);
std::optional<std::string> getConfig(const std::string& module, const std::string& key);

#endif
