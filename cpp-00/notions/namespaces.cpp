/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespaces.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:52:58 by vipereir          #+#    #+#             */
/*   Updated: 2023/03/21 16:13:00 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	g_val = 1;

int	function(void)
{
	return (2);
}

namespace	Foo {

	int	g_val = 3;

	int	function(void)
	{
	return (4);
	}

}

namespace	Fvck {

	int	g_val = 666;

	int	function(void)
	{
	return (777);
	}

}

namespace devil = Fvck;


int	main (void)
{
	printf("global\n");
	printf("g_val: %i, funciton: %i\n", g_val, function()); // global

	printf("Foo::\n");
	printf("g_val: %i, funciton: %i\n", Foo::g_val, Foo::function()); // namespace Foo


	printf("Fvck::\n");
	printf("g_val: %i, funciton: %i\n", Fvck::g_val, Fvck::function()); // namespace Fvck

	printf("devil::\n");
	printf("g_val: %i, funciton: %i\n", devil::g_val, devil::function()); // namespace devil

	return (0);
}


