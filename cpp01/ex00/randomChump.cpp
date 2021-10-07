#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	random_z;
	random_z.defineName(name);
	random_z.announce();
}