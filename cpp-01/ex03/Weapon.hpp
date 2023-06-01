#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		void				setType(std::string weaponType);
		std::string const	&getType(void);

	private:

		std::string	_type;

};


#endif /* ********************************************************** WEAPON_H */