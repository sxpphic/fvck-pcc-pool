/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:32:31 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 13:12:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "ICharacter.hpp"


class Character : public ICharacter {

	public:

		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();

	private:
		std::string _name;
		AMateria	*_slot[4]; // lá fala q tem q ser empty qnd inicializa, será q vou ter q criar um array com ponteiro? 
	
};

#endif