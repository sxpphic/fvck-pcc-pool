/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:57:21 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/09 19:06:27 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
	try {
		Array<std::string>	arr(3);

		arr[0] = "abacate";
		arr[1] = "frutas tropicais";
		//arr[2] default 
		//arr[3] = "big big";

		Array<std::string>	arr_copy(arr);



		std::cout << "before mods:" << std::endl;
		std::cout << "size arr: " << arr.size() << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall arr: " << arr[2] << std::endl << std::endl;
		
		std::cout << "size cpy: " << arr_copy.size() << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[2] << std::endl;

		arr_copy[1] = "frutas medievais";

		std::cout << "after mod copy:" << std::endl;

		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;

		arr[0] = "laranja";

		std::cout << "after mod origin:" << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;

		// operator = 

		arr_copy = arr;

		std::cout << "copy" << std::endl;
		std::cout << "size arr: " << arr.size() << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall arr: " << arr[2] << std::endl << std::endl;
		
		std::cout << "size cpy: " << arr_copy.size() << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[2] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

/*
int main(void) {
	try {
		Array<int>	arr(3);

		arr[0] = 1;
		arr[1] = 666;
		//arr[2] default 
		//arr[3] = "big big";

		Array<int>	arr_copy(arr);



		std::cout << "before mods:" << std::endl;
		std::cout << "size arr: " << arr.size() << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall arr: " << arr[2] << std::endl << std::endl;
		
		std::cout << "size cpy: " << arr_copy.size() << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[2] << std::endl;

		arr_copy[1] = 777;

		std::cout << "after mod copy:" << std::endl;

		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;

		arr[0] = 2;

		std::cout << "after mod origin:" << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;

		// operator = 

		arr_copy = arr;

		std::cout << "copy" << std::endl;
		std::cout << "size arr: " << arr.size() << std::endl;
		std::cout << "vall arr: " << arr[0] << std::endl;
		std::cout << "vall arr: " << arr[1] << std::endl;
		std::cout << "vall arr: " << arr[2] << std::endl << std::endl;
		
		std::cout << "size cpy: " << arr_copy.size() << std::endl;
		std::cout << "vall cpy: " << arr_copy[0] << std::endl;
		std::cout << "vall cpy: " << arr_copy[1] << std::endl;
		std::cout << "vall cpy: " << arr_copy[2] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
*/
