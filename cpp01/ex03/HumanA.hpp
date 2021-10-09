#ifndef HUMANA_HPP
#define HUMANA_HPP

# define GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLORIZE "\033[0;36m"

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	HumanA();
	~HumanA();

	void	attack();
};

#endif