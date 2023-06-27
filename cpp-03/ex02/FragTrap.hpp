/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:58:57 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/27 14:18:30 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& other);
		FragTrap& operator=(FragTrap& other);
		~FragTrap();
		
		void highFivesGuys(void);
				
	private:

		void	_init();
		void	_copy(const FragTrap& other);

};

#endif