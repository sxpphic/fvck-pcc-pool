/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:43 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 12:13:55 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class	Cat : public Animal {

	public:
		Cat();
		Cat(const Cat& other);
		~Cat();
		Cat& operator=(const Cat& other);
		void makeSound(void) const;
		
};

#endif