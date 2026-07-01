#include "logger.hpp"

#include <iostream>

void logInfo(std::string message)
{
	std::cout << "[INFO]" << message << std::endl;
}

void logWarning(std::string message)
{
	std::cout << "[WARNING]"<< message << std::endl;
}

void logError(std::string message)
{
	std::cout << "[ERROR]" << message << std::endl;
}
