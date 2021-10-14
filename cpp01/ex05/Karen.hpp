#ifndef KAREN_HPP
# define KAREN_HPP

# define GREEN "\033[0;32m"
# define COLOR_RESET "\033[0m"
# define COLORIZE "\033[0;36m"

#include <iostream>

class Karen
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public:
	Karen();
	~Karen();

	void complain(std::string level);
};

typedef void (Karen::*my_memfunc_ptr)(void);

#endif