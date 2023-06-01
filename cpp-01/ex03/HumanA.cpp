#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weaponREF)
{
	this->_name = name;
	this->setWeapon(weaponREF);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void		HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_myWeapon->getType() << std:: endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	HumanA::setWeapon(Weapon &weaponREF)
{
	this->_myWeapon = &weaponREF;
}



/* ************************************************************************** */