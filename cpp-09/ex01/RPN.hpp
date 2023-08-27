/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:38:08 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/27 08:54:12 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_
# include <string>
# include <sstream>
# include <cstdlib>
# include <iostream>
# include <stack>


int rpn(const std::string& input);
bool is_number(const std::string& str);

#endif