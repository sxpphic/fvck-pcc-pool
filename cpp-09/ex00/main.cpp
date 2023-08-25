/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:16 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 14:53:53 by vipereir         ###   ########.fr       */
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
	
	std::vector<btc_price_s> data = open_csv();
	
	std::cout << data[0]._date << std::endl;
	std::cout << data[0]._price << std::endl;
	
	return (0);
}