/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:15:42 by vipereir          #+#    #+#             */
/*   Updated: 2023/03/22 17:28:59 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void){
	std::cout << "bar bar bar bar" << std::endl;
}
