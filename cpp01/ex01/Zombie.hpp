#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"

#include <string>
#include <iostream>

class Zombie
		{
		private:
			std::string z_name;
		public:
			Zombie(std::string name);
			Zombie();
			~Zombie();

			void	announce(void);
			void	defineName(std::string define_name);
		};

Zombie* zombieHorde(int N, std::string name);

#endif
