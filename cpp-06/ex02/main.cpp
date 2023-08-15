/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:34:43 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/15 19:17:17 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main(void) {

	Base* obj = generate();

	identify(obj);
	identify(*obj);
	delete obj;
	return (0);
}