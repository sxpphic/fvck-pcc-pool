#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:
		//HumanA();
		HumanA(std::string name, Weapon &weaponREF);
		~HumanA();
		void		setWeapon(Weapon &weaponREF);
		void		attack(void);

	private:

		std::string _name;
		Weapon		&_myWeapon;

};

#endif /* ********************************************************** HUMANA_H */