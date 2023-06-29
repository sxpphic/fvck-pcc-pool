/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:26:43 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 12:13:55 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		~WrongCat();
		WrongCat& operator=(const WrongCat& other);
		void makeSound(void) const;
		
};

#endif