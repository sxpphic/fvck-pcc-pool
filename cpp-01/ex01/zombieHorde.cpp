/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:00:49 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 12:20:23 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*manyZombies = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		manyZombies[i].setName(name);
	return (manyZombies);
}
