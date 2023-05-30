/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:40:25 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 12:47:49 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{

	public:

		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
		
		
	private:
		static int	_instances_number;
		std::string	_name;
};

// functions

Zombie* zombieHorde( int N, std::string name );

#endif /* ********************************************************** ZOMBIE_H */