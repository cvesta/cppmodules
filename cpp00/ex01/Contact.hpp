#ifndef CONTACT_HPP
# define CONTACT_HPP

# define COLORIZE "\033[0;36m"
# define COLOR_RESET "\033[0m"
# define GREEN "\033[0;32m"

#include <iostream>
#include <string>
#include <iomanip>

class Contact
		{
private:
			std::string		firstname;
			std::string 	lastname;
			std::string 	nickname;
			std::string 	phonenumber;
			std::string 	darkestsecret;
public:
			Contact();
			~Contact();

			void	FirstName(void);
			void	LastName(void);
			void	Nickname(void);
			void	PhoneNumber(void);
			void	DarkestSecret(void);
			int		FindInformation(void);
			void	CheckLength(std::string name);
			void	ShowBook(int index);
		};

#endif
