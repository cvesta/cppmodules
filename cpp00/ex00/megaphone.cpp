#include <iostream>

int main(int ac, char **av)
{
	int i;
	int c;

	i = 0;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while (ac > ++i)
		{
			c = 0;
			while (av[i][c])
			{
				std::cout << (char)toupper(av[i][c]);
				c++;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}