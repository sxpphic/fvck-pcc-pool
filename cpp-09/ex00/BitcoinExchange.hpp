/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:15:13 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/25 15:20:44 by vipereir         ###   ########.fr       */
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

struct btc_price_s
{
	std::string	_date;
	float		_price;
};

bool						is_number(const std::string& str);
bool						check_date(const std::string& date);
bool						check_value(const std::string& value);
std::vector<btc_price_s>	open_csv(void);



#endif
