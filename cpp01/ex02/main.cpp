#include "iostream"
#include "string"
# define GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLORIZE "\033[0;36m"

int main()
{

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "original string address: " << GREEN << &str << COLOR_RESET << std::endl;
	std::cout << "stringPTR address: " << GREEN << stringPTR << COLOR_RESET << std::endl;
	std::cout << "stringREF address: " << GREEN << &stringREF << COLOR_RESET
	<< std::endl << std::endl;

	std::cout << "stringPTR: " << COLORIZE << *stringPTR << COLOR_RESET <<
	std::endl;
	std::cout << "stringREF: " << COLORIZE << stringREF << COLOR_RESET <<
	std::endl;

}