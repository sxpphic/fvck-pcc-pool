/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:52 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 09:56:56 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "AAnimal.hpp"

class	Dog : public AAnimal {
	
	public:

		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog& operator=(const Dog &other);
		void	makeSound(void) const;

	private:

		Brain* _my_brain;
		
};

#endif