/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:41:46 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/27 09:58:15 by vipereir         ###   ########.fr       */
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
# include <ctime>
# include <algorithm>
# include <iomanip>
# include <unistd.h>
# include <sys/time.h>

const int 	THRESHOLD = 5;

bool	validate_input(char** argv);
void	print_before(char** argv);
void	print_after(const std::list<int>& list);
void	deque_print_after(const std::deque<int>& list);
void	sort_list(std::list<int>& list, char** argv, double& ltime);
void	sort_deque(std::deque<int>& deque, char** argv, double& dtime);
void	fill_list(std::list<int>& list, char** argv);

#endif