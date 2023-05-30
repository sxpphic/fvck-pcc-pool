/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:26:55 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/30 11:41:22 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*lastZombie = newZombie("Pedro Pascal");

	lastZombie->announce();
	randomChump("Ellie");
	delete lastZombie;
	return (0);
}
