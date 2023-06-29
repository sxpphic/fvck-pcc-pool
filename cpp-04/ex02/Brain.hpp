/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:00:04 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 14:19:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>

class Brain {
	
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain& operator=(const Brain &other);
		
		std::string	ideas[100];		

};

#endif