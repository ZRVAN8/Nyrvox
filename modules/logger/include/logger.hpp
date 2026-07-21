#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

void logInfo(const std::string& module, const std::string& message);
void logWarning(const std::string& module, const std::string& message);
void logError(const std::string& module, const std::string& message);
void logDebug(const std::string& module, const std::string& message);

#endif
