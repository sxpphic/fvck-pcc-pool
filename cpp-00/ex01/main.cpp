/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:00:23 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 16:56:23 by vipereir         ###   ########.fr       */
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
        std::cin.clear();
        std::cin >> Command; // ctrl D da ruim, n sei pq.
        if (Command == "ADD") 
            DevilsPhoneBook.AddContact();
        else if (Command == "SEARCH")
            DevilsPhoneBook.SearchContact();
        else if (Command == "EXIT")
        {
            std::cout << "EXIT" << std::endl;
            return (0);
        }
        else
        {
            std::cout << "not a command 💀" << std::endl; 
            std::cin.clear(); // n funciona
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return (0);
}



