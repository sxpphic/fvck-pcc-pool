/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:00:23 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/25 10:28:08 by vipereir         ###   ########.fr       */
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
        std::getline(std::cin, Command);
        if (std::cin.eof())
            return (0);
        if (Command == "ADD") 
            DevilsPhoneBook.AddContact();
        else if (Command == "SEARCH")
            DevilsPhoneBook.SearchContact();
        else if (Command == "EXIT")
            return (0);
        else
            std::cout << "not a command 💀" << std::endl; 
    }
    return (0);
}



