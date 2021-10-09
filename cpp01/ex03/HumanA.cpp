#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::HumanA() {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << GREEN << name << COLOR_RESET << " attacks with his " <<
	GREEN << weapon->getType() << COLOR_RESET << std::endl;
}