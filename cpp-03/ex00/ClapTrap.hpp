/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:27:51 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/24 10:35:38 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H
# include <iostream>

class	ClapTrap {

	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& other);
	ClapTrap&	operator=(ClapTrap& other);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	private:	
		std::string	_name;
		int			_hit_points;
		int			_energy_points;
		int			_atack_damage;
		bool		_useEnergy();
		
};

#endif