/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:18 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 15:53:08 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool is_number(const std::string& str) {
	int		dot_counter = 0;
/* 	if (str.empty())
		return (false); */
	int start = (str[0] == '+' || str[0] == '-') ? 1 : 0;
	for (int i = start; str[i]; i++) {
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

bool	check_date(const std::string& date, btc_price_s& entry) {
	std::tm tm;
	if (strptime(date.c_str(), "%Y-%m-%d", &tm)) {
		tm.tm_year += 1900;
		tm.tm_mon += 1;
		entry._date = tm;
		return (true);
	}
	return (false);
}

bool	check_value(const std::string& value) {
	if (!is_number(value))
		return (false);
	float num = atof(value.c_str());
	if (num < 0 || num >= INT_MAX)
		return (false);
	return (true);
}

bool	check_input_value(const std::string& value) {
	if (!is_number(value)) {
		std::cerr << "Error: not a number." << std::endl;	
		return (false);
	}
	float num = atof(value.c_str());
	if (num < 0) {
		std::cerr << "Error: not a positive number." << std::endl;	
		return (false);
	}
	else if (num >= INT_MAX) {
		std::cerr << "Error: too large a number." << std::endl;	
		return (false);
	}
	return (true);
}

std::vector<btc_price_s>	open_file(void) {
	std::vector<btc_price_s> btc_price;
	(void)btc_price;
	
	std::ifstream	file("data.csv");

	if (!file.is_open()) {
		std::cerr << "Error: cannot open data.csv !!" << std::endl;	
		exit(EXIT_FAILURE); // exit ou return ??
	}

	std::string line;
	std::getline(file, line); // remover primeira linha do csv;

	while (std::getline(file, line)) {
		btc_price_s	entry;
		std::stringstream	ss(line);
		std::string			price_str;
		std::string			date;

		std::getline(ss, date, ',');
		ss >> price_str;
		entry._price = atof(price_str.c_str());
		if (!check_date(date, entry) || !check_value(price_str)) {
			std::cerr << "Error: invalid csv" << std::endl;
			exit(EXIT_FAILURE);
		}
		btc_price.push_back(entry);
	}
	file.close();
	return (btc_price);
}

std::string string_trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r\f\v");
    size_t end = str.find_last_not_of(" \t\n\r\f\v");
    
    if (start == std::string::npos)
        return "";
    return str.substr(start, end - start + 1);
}

int compare_date(const std::tm &tm1, const std::tm &tm2) {
    if (tm1.tm_year < tm2.tm_year) return -1;
    if (tm1.tm_year > tm2.tm_year) return 1;
    
    if (tm1.tm_mon < tm2.tm_mon) return -1;
    if (tm1.tm_mon > tm2.tm_mon) return 1;
    
    if (tm1.tm_mday < tm2.tm_mday) return -1;
    if (tm1.tm_mday > tm2.tm_mday) return 1;
    
    return 0;
}

float	exchange_value(std::vector<btc_price_s>& btc_price, const btc_price_s& input_entry) {
	if (compare_date(btc_price[0]._date, input_entry._date) == 1) {
		return (0);
	}
	for (std::vector<btc_price_s>::iterator it = btc_price.begin(); it != btc_price.end(); it++) {
		btc_price_s&	item = *it;
		int res = compare_date(item._date, input_entry._date);
		if (res == 0) {
			return (item._price * input_entry._amount);
		}
		if (res == 1) {
			item = *--it;
			return (item._price * input_entry._amount);
		}
	}
	return ((*--btc_price.end())._price * input_entry._amount);

	return (0);
}


void	read_input_file( std::vector<btc_price_s>& btc_price, const std::string& input_path) {	
	(void)btc_price;
	std::ifstream	file(input_path.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: cannot open input.txt !!" << std::endl;	
		exit(EXIT_FAILURE); // exit ou return ??
	}
	std::string line;
	std::getline(file, line); // remover primeira linha do csv;
	while (std::getline(file, line)) {
		btc_price_s	input_entry;
		std::stringstream	ss(line);
		std::string			amount_str;
		std::string			date_str;

		std::getline(ss, date_str, '|');
		date_str = string_trim(date_str);
		ss >> amount_str;
		input_entry._amount = atof(amount_str.c_str());
		amount_str = string_trim(amount_str);
		if (!check_date(date_str, input_entry)) {
			std::cerr << "Error: bad input => " << line << std::endl;
		} else if (!check_input_value(amount_str)) {}
 		else {
			std::cout << date_str << " => " << input_entry._amount << " = " << exchange_value(btc_price, input_entry) << std::endl; 
		}


	}
	file.close();

}