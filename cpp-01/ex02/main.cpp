/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:18:12 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/31 14:03:50 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string stringDEV = "D̵̡̢̠̬̝̥͙̘͙̝͓̂Ḛ̶̫͔̎͑̈̈́V̴̢̲̘̗̤͉͒̀͌̒͆́̅̐͐́͋̃̚͝Ḯ̷͙́L̵̩̺̬̉̓̈́̽͐";
	std::string *stringPTR = &stringDEV;
	std::string &stringREF = stringDEV;

	std::cout << "stringDEV addr: " << &stringDEV << std::endl
;	std::cout << "stringPTR addr: " << stringPTR << std::endl
;	std::cout << "stringREF addr: " << &stringREF << std::endl
;
	std::cout << "stringDEV value: " << stringDEV << std::endl;
	std::cout << "stringPTR value: " << *stringPTR << std::endl;
	std::cout << "stringREF value: " << stringREF << std::endl;
	
	return (0);
}