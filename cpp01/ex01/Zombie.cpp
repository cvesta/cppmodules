#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombies are coming" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->z_name = name;
	std::cout << "Zombie " << GREEN << z_name << COLOR_RESET << " is here" <<
	std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << GREEN << z_name << COLOR_RESET << " has died"
	<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout << GREEN << z_name << COLOR_RESET << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::defineName(std::string name)
{
	this->z_name = name;
}