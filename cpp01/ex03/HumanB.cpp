#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}
HumanB::HumanB() {}
HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}

void	HumanB::attack(void)
{
	std::cout << COLORIZE << name << COLOR_RESET << " attacks with his " <<
	COLORIZE << weapon->getType() << COLOR_RESET << std::endl;
}