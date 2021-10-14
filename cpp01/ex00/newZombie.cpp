#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* n_z;
	n_z = new Zombie(name);
	return (n_z);
}