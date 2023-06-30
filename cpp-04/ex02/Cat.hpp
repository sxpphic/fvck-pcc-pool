/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:43 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/30 09:25:50 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "AAnimal.hpp"


class	Cat : public AAnimal {

	public:
		Cat();
		Cat(const Cat& other);
		~Cat();
		Cat& operator=(const Cat& other);
		void makeSound(void) const;

		void setIdea(const std::string new_idea, int x);
		std::string getIdea(int x);

	private:
		Brain* _my_brain;
		
};

#endif