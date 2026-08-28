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

	if(!loadConfig("nyrvox"))
	{
		std::cout << "Failed to load nyrvox configuration\n";
		return false;
	}
	logInfo("BOOT","Nyrvox boot completed");
	std::cout << "Nyrvox Ready!\n";
	return true;
}
