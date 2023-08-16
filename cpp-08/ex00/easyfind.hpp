/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:02:11 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/16 14:53:29 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>

template<class T>
void easyfind(const T& container, int to_find) {
	for (typename T::const_iterator it = container.begin(); it != container.end(); it++) {
		if (*it == to_find) {
			std::cout << "found it!!!" << std::endl;
			return ;
		}
	}
	throw(std::runtime_error("not found 😅"));
}



#endif