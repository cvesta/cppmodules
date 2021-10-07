#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void	PhoneBook::Begin()
{
	this->counter = 0;
}

int main()
{
	std::string cmd;
	PhoneBook book;
	Contact contacts;

	book.Begin();
	while(42)
	{
		std::cout << GREEN << "choose between ADD SEARCH and EXIT ————> " <<
		COLOR_RESET;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (0);
		std::cin.ignore(cmd.max_size(), '\n');
		if (cmd == "EXIT" || cmd == "exit")
		{
			std::cout << COLORIZE << "PhoneBook is closed. contacts are "
									 "removed" << COLOR_RESET << std::endl;
			break ;
		}
		else if (cmd == "ADD" || cmd == "add")
			book.Add();
		else if (cmd == "SEARCH" || cmd == "search")
			book.Search();
		else
			std::cout << COLORIZE <<  "there is no such a command. use only ADD SEARCH and"
						 " EXIT" << COLOR_RESET << std::endl;
	}
	return (0);
}
