#include "Zombie.hpp"

int main()
{

	Zombie *zombie;


	zombie = zombieHorde(5, "meow");
//	while (++i)
//	{
//		if (i < 15)
//			zombie[i].announce();
//	}

for (int i = 0; i < 5; ++i)
	zombie[i].announce();

	delete[] zombie;
	return (0);
}