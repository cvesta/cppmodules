#include "Zombie.hpp"

int main()
{
	Zombie *first_zombie;

	first_zombie = newZombie("cerebra");
	first_zombie->announce();
	delete first_zombie;
	randomChump("vesta");
	return (0);
}