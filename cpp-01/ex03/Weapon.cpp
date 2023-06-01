#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Weapon::setType(std::string weaponType)
{
	this->_type = weaponType;
}

std::string const &Weapon::getType(void)
{
	std::string const &typeREF = this->_type;
	return (typeREF);
}

/* ************************************************************************** */