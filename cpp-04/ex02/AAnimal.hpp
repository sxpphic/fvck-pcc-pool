/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 09:25:26 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
# define AAnimal_H
# include <iostream>
# include "Brain.hpp" 

class	AAnimal {

		public:
			AAnimal();
			AAnimal(const AAnimal& other);
			AAnimal& operator=(const AAnimal& other);
			virtual ~AAnimal();

			std::string getType() const;
			virtual	void makeSound(void) const = 0;
		
		protected:
			std::string type;
};


#endif