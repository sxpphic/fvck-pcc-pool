/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:01:54 by vipereir          #+#    #+#             */
/*   Updated: 2023/05/24 16:48:51 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"
# include <limits>
# include <ios>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void AddContact(void);
		void SearchContact(void);
		static int	it;
		static int	contacts_number;
	private:
		Contact		_ContactList[8];
};

void	skull(void);

#endif // !PHONEBOOK_H
