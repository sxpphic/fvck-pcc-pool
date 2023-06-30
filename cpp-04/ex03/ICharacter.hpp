/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:15:06 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 16:39:08 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_CHARACTER_H
# define I_CHARACTER_H
# include "AMateria.hpp"

class	ICharacter {

	public:
	virtual ~ICharacter() {};
	virtual const std::string& getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif