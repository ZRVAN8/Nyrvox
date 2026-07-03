#include "logger.hpp"

#include <iostream>

int main()
{
	logInfo("Hello Nova Started!");
	std::cout << "hello nova!" << std::endl;
	logWarning("Hello Nova end!");
	logError("not error");

	return 0;
}
