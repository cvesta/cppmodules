#include "Karen.hpp"

enum level {
	DEBUG, INFO, WARNING, ERROR, DEFAULT
};

level	getLevel(std::string lvltype)
{
	level lvl = DEFAULT;
	if (lvltype == "DEBUG")
		lvl = DEBUG;
	if (lvltype == "INFO")
		lvl = INFO;
	if (lvltype == "WARNING")
		lvl = WARNING;
	if (lvltype == "ERROR")
		lvl = ERROR;
	return (lvl);
}

int main(int argc, char **argv)
{


	if (argc != 2)
	{
		std::cout << "incorrect number of arguments" << std::endl;
		return (1);
	}
	Karen karen;
	switch (getLevel(argv[1]))
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl << std::endl;
	}
	return (0);
}