/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:16 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 15:52:19 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
	(void)argc;
	(void)argv;
/*  	if (argc != 2) {
		std::cout << "wrong imput!!" << std::endl;
		return (0);
	} */
	// checar se o data.csv existe.
	

	
	std::vector<btc_price_s> data = open_file("input.txt", '|');

	for (std::vector<btc_price_s>::iterator it = data.begin(); it != data.end(); it++) {
		const btc_price_s&	entry = *it;

		std::cout << entry._date << " - " <<entry._price << std::endl;
	}
	
	return (0);
}