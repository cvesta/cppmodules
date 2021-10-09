#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type) // как установить тип
{
	this->type = type;
}

const std::string& Weapon::getType() //узнать тип
{
	return (type);
}


Weapon::Weapon(std::string type) //установить тип
{
	this->setType(type);
}
