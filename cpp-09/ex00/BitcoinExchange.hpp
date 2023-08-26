/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 15:52:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_H
# define BITCOIN_EXCHANGE_H

# include <string>
# include <iostream>
# include <ctime>
# include <vector>
# include <fstream>
# include <sstream>
# include <cstdlib>
# include <climits>

struct btc_price_s
{
	std::tm		_date;
	float		_price;
	float		_amount;
};

bool						is_number(const std::string& str);
bool						check_date(const std::string& date, btc_price_s& entry);
bool						check_value(const std::string& value);
bool						check_input_value(const std::string& value);
std::vector<btc_price_s>	open_file(void);
void						read_input_file(std::vector<btc_price_s>& btc_price, const std::string& input_path);


#endif
