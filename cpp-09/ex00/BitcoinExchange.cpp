/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:18 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 15:21:13 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool is_number(const std::string& str) {
	int		dot_counter = 0;
/* 	if (str.empty())
		return (false); */
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.')
				dot_counter++;
			else
				return (false);
		}
	}
	if (dot_counter <= 1)
		return (true);
	return (false);
}

bool	check_date(const std::string& date) {
	struct tm tm;
	if (strptime(date.c_str(), "%Y-%m-%d", &tm))
		return (true);
	return (false);
}

bool	check_value(const std::string& value) {
	if (!is_number(value))
		return (false);
	float num = atof(value.c_str());
	if (num < 0)
		return (false);
	return (true);
}

std::vector<btc_price_s>	open_csv(void) {
	std::vector<btc_price_s> btc_price;
	(void)btc_price;
	
	std::ifstream	file("data.csv");

	if (!file.is_open()) {
		std::cerr << "cannot open data.csv !!" << std::endl;
		exit(EXIT_FAILURE); // exit ou return ??
	}

	std::string line;
	std::getline(file, line); // remover primeira linha do csv;

	while (std::getline(file, line)) {
		std::cout << line << std::endl;
		btc_price_s	entry;
		std::stringstream	ss(line);
		std::string			price_str;

		std::getline(ss, entry._date, ',');
		ss >> entry._price;
		ss >> price_str;
		if (!check_date(entry._date) || !check_value(price_str)) {
			std::cerr << "invalid csv" << std::endl;
			exit(EXIT_FAILURE);
		}
		btc_price.push_back(entry);
	}
	file.close();
	return (btc_price);
}