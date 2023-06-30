/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:12:23 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 16:36:16 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
# define A_MATERIA_H
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
	
	public:
	
		AMateria();
		AMateria(const std::string& type);
		AMateria(const AMateria& other);
		AMateria& operator=(const AMateria&other);
		~AMateria();

		const std::string& getType(void) const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
	
		std::string	type;

};

#endif