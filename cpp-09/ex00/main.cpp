/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:16 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/27 08:30:48 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char** argv) {
  	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}	
	std::vector<btc_price_s> data = open_file();
	read_input_file(data, argv[1]);
	return (0);
}