#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/* HumanA::HumanA()
{
	this->_myWeapon = NULL;
} */

HumanA::HumanA(std::string name, Weapon &weaponREF) : _name(name), _myWeapon(weaponREF) {}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << _myWeapon.getType() << std:: endl;
}