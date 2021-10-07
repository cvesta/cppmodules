#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define COLORIZE "\033[0;36m"
# define COLOR_RESET "\033[0m"
# define GREEN "\033[0;32m"

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>


class PhoneBook
		{
private:
			Contact contacts[8];
			int counter;
public:
			PhoneBook();
			~PhoneBook();

			void	Begin(void);
			void	Add(void);
			void	Search(void);
		};

#endif