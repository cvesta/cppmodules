#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void	Contact::FirstName()
{
	std::cout << COLORIZE << "your first name is " << COLOR_RESET;
	std::getline(std::cin, firstname);
}
void	Contact::LastName()
{
	std::cout << COLORIZE << "your last name is " << COLOR_RESET;
	std::getline(std::cin, lastname);
}

void	Contact::Nickname()
{
	std::cout << COLORIZE <<  "your nickname is " << COLOR_RESET;
	std::getline(std::cin, nickname);
}

void	Contact::PhoneNumber()
{
	std::cout << COLORIZE << "your phone number is " << COLOR_RESET;
	std::getline(std::cin, phonenumber);
}

void	Contact::DarkestSecret()
{
	std::cout << COLORIZE << "your darkest secret is " << COLOR_RESET;
	std::getline(std::cin, darkestsecret);
}

int		Contact::FindInformation()
{
	if (firstname.size() == 0 && lastname.size() == 0 && nickname.size() == 0
	&& phonenumber.size() == 0 && darkestsecret.size() == 0)
	{
		std::cout << COLORIZE << "nothing is found" << COLOR_RESET << std::endl;
		return (0);
	}
	std::cout << GREEN << "—————— Information ——————" << COLOR_RESET <<
	std::endl;
	std::cout << COLORIZE << "first name is         " << COLOR_RESET
	<<firstname << std::endl;
	std::cout << COLORIZE <<  "last name is          " << COLOR_RESET << lastname <<
	std::endl;
	std::cout << COLORIZE << "nickname is           " << COLOR_RESET <<
	nickname << std::endl;
	std::cout << COLORIZE << "phone number is       " << COLOR_RESET <<
	phonenumber << std::endl;
	std::cout << COLORIZE << "the darkest secret is " << COLOR_RESET
	<< darkestsecret << COLOR_RESET << std::endl;
	return (1);
}

void	Contact::CheckLength(std::string name)
{
	int	c;

	c = name.size();
	if (c < 10)
		std::cout << std::setfill(' ') << std::setw(10) << name;
	else
	{
		std::cout << std::setw(9) << name.substr(0, 9);
		std::cout << '.';
	}
}

void	Contact::ShowBook(int index)
{
	std::cout << std::setw(10) << index << GREEN << '|' << COLOR_RESET;
	CheckLength(firstname);
	std::cout << GREEN << '|' << COLOR_RESET;
	CheckLength(lastname);
	std::cout << GREEN << '|' << COLOR_RESET;
	CheckLength(nickname);
	std::cout << std::endl;
}