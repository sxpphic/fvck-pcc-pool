/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:00:23 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 11:31:42 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
    PhoneBook   DevilsPhoneBook;
    std::string Command;

    skull();  
    while (666)
    {
        std::cin >> Command;
        if (Command == "ADD") 
            std::cout << "ADD" << std::endl;
        else if (Command == "SEARCH")
            std::cout << "SEARCH" << std::endl;
        else if (Command == "EXIT")
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        else
            std::cout << "not a command 💀" << std::endl;
    }
    return (0);
}



