/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:33:58 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 19:17:04 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H
# include "AMateria.hpp"

class Ice : public AMateria {
	
	public:
		Ice();
		Ice(const std::string& type);
		Ice(const Ice& other);
		Ice& operator=(const Ice& other);
		~Ice();
		
		AMateria* 	clone(void) const;
		void		use(ICharacter& target);
		
};

#endif
