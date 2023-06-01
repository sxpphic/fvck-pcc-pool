#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"
class HumanB
{

	public:

		HumanB();
		HumanB(std::string name);
		~HumanB();
		void		setWeapon(Weapon &weaponREF);
		void		attack(void);

	private:
		std::string _name;
		Weapon	*_myWeapon;

};

#endif /* ********************************************************** HUMANB_H */