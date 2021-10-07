#include "PhoneBook.hpp"

void	PhoneBook::Add()
{
	if (counter == 8)
		this->counter = 0;
	contacts[counter].FirstName();
	contacts[counter].LastName();
	contacts[counter].Nickname();
	contacts[counter].PhoneNumber();
	contacts[counter].DarkestSecret();
	std::cout << COLORIZE << "successfully added" << COLOR_RESET << std::endl;
	this->counter++;
}

void	PhoneBook::Search()
{
	int	i;
	std::string str;

	i = -1;
	if (counter == 0)
	{
		std::cout << "it's all empty here" << std::endl;
		return ;
	}
	std::cout << COLORIZE << "     index|first name| last name|  nickname"
	<< COLOR_RESET << std::endl;
	while (++i < 8)
		contacts[i].ShowBook(i);
	while (42)
	{
		std::cout << COLORIZE << "index is " << COLOR_RESET;
		std::getline(std::cin, str);
		if(!(str[0] >= 48 && str[0] <= 55) || str.size() != 1)
			std::cout << COLORIZE << "index is incorrect" << COLOR_RESET <<
			std::endl;
		else
		{
			if (contacts[str[0] - '0'].FindInformation() == 1)
				break ;
			else
				continue ;
		}
	}
}