/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:16:50 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/01 15:29:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_and_replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4) {
		std::cout << "Wrong input 👺" << std::endl;
		return (0);
	} else {
		search_and_replace(argv);
	}
	return (0);
}
