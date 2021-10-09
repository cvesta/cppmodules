#ifndef HUMANB_HPP
#define HUMANB_HPP

# define GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLORIZE "\033[0;36m"

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon		*weapon;
public:
	HumanB(std::string name);
	HumanB();
	~HumanB();

	void		setWeapon(Weapon &weapon);
	void		attack(void);
};

#endif