#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB()
{
	this->_myWeapon = NULL;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_myWeapon = NULL;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB() {}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		HumanB::attack(void)
{
	if (this->_myWeapon == NULL)
	{
		std::cout << "no weapon, looser 😹" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_myWeapon->getType() << std:: endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	HumanB::setWeapon(Weapon &weaponREF)
{
	this->_myWeapon = &weaponREF;
}


/* ************************************************************************** */