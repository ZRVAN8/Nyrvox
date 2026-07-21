#include "config.hpp"
#include "logger.hpp"

#include <iostream>

bool boot()
{
	std::cout << "Boot started...\n";

	if(!loadConfig("logger"))
	{
		std::cout << "Failed to load logger configuration\n";
		return false;
	}
	logInfo("BOOT","Logger configuration loaded");

	if(!loadConfig("nova"))
	{
		std::cout << "Failed to load nova configuration\n";
		return false;
	}
	logInfo("BOOT","Nova boot completed");
	std::cout << "NOVA Ready!\n";
	return true;
}
