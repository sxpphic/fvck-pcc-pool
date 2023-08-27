/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:41:46 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/21 11:42:03 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_H
# define PMERGE_ME_H
# include <string>
# include <iostream>
# include <climits>
# include <cstdlib>
# include <list>
# include <deque>


bool	validate_input(char** argv);
void	print_before(char** argv);
void	print_after(const std::list<int>& list);
void	sort_list(std::list<int>& list, char** argv, float& ltime);
void	fill_list(std::list<int>& list, char** argv);



#endif