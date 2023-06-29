/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 12:29:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H
# include <iostream>

class	WrongAnimal {

		public:
			WrongAnimal();
			WrongAnimal(const WrongAnimal& other);
			WrongAnimal& operator=(const WrongAnimal& other);
			~WrongAnimal();

			std::string getType() const;
			void makeSound(void) const;
		
		protected:
			std::string type;
};


#endif