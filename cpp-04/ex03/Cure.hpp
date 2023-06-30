/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:33:50 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 19:31:07 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include "AMateria.hpp"

class Cure : public AMateria {
	
	public:
		Cure();
		Cure(const std::string& type);
		Cure(const Cure& other);
		Cure& operator=(const Cure& other);
		~Cure();
		
		AMateria* 	clone(void) const;
		void		use(ICharacter& target);
		
};

#endif
