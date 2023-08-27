/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 11:42:07 by vipereir          #+#    #+#             */
/*   Updated: 2023/08/27 09:04:05 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool is_number(const std::string& str) {
	if (str.empty())
		return (false);
	for (int i = 0; str[i]; i++) {
		if (!isdigit(str[i]))
			return (false);
	}
	if (atof(str.c_str()) > INT_MAX)
		return (false);
	return (true);
}

bool	validate_input(char** argv) {
	for (int i = 1; argv[i]; i++) {
		if (!is_number(argv[i]))
			return (false);
	}
	return (true);
}

void	print_before(char** argv) {
	std::cout << "Before:\t";

	for (int i = 0; argv[i]; i++) {
		std::cout << argv[i] << " ";
	}
	std::cout << std::endl;
}

void	print_after(const std::list<int>& list) {
	std::cout << "After:\t";

	for (std::list<int>::const_iterator it = list.begin(); it != list.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}


void	fill_list(std::list<int>& list, char** argv) {
	for (int i = 0; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
}

void	fill_deque(std::deque<int>& list, char** argv) {
	for (int i = 0; argv[i]; i++) {
		list.push_back(atoi(argv[i]));
	}
}



//
void insertSorted(std::list<int>& sortedList, int value) {
    std::list<int>::iterator it;
    for (it = sortedList.begin(); it != sortedList.end(); ++it) {
        if (*it > value) {
            sortedList.insert(it, value);
            return;
        }
    }
    sortedList.insert(it, value);
}

void insertionSort(std::list<int>& arr) {
    std::list<int> sortedList;
    
    while (!arr.empty()) {
        int current = arr.front();
        arr.pop_front();
        insertSorted(sortedList, current);
    }
    
    arr.swap(sortedList);
}

void mergeLists(std::list<int>& result, std::list<int>& left, std::list<int>& right) {
    std::list<int>::iterator itLeft = left.begin();
    std::list<int>::iterator itRight = right.begin();
    
    while (itLeft != left.end() && itRight != right.end()) {
        if (*itLeft <= *itRight) {
            result.push_back(*itLeft);
            ++itLeft;
        } else {
            result.push_back(*itRight);
            ++itRight;
        }
    }
    
    while (itLeft != left.end()) {
        result.push_back(*itLeft);
        ++itLeft;
    }
    while (itRight != right.end()) {
        result.push_back(*itRight);
        ++itRight;
    }
}

void mergeInsertionSort(std::list<int>& arr) {
    if (arr.size() <= THRESHOLD) {
        insertionSort(arr);
        return;
    }
    
    std::list<int> left, right;
    int mid = arr.size() / 2;
    for (int i = 0; i < mid; ++i) {
        left.push_back(arr.front());
        arr.pop_front();
    }
    right = arr;
    
    mergeInsertionSort(left);
    mergeInsertionSort(right);
    
    arr.clear();
    mergeLists(arr, left, right);
}
//

void	sort_list(std::list<int>& list, char** argv, double& ltime) {
	clock_t	start = clock();
	(void)ltime;

	fill_list(list, argv);
	mergeInsertionSort(list);

	clock_t	end = clock();
	ltime = (double)(end - start) / ((double)CLOCKS_PER_SEC /*  / 1000000.0 */ );
}


// deque

void deque_insertSorted(std::deque<int>& sortedDeque, int value) {
    std::deque<int>::iterator it;
    for (it = sortedDeque.begin(); it != sortedDeque.end(); ++it) {
        if (*it > value) {
            sortedDeque.insert(it, value);
            return;
        }
    }
    sortedDeque.insert(it, value);
}

void deque_insertionSort(std::deque<int>& arr) {
    std::deque<int> sortedDeque;
    
    while (!arr.empty()) {
        int current = arr.front();
        arr.pop_front();
        deque_insertSorted(sortedDeque, current);
    }
    
    arr.swap(sortedDeque);
}

void deque_mergeLists(std::deque<int>& result, std::deque<int>& left, std::deque<int>& right) {
    std::deque<int>::iterator itLeft = left.begin();
    std::deque<int>::iterator itRight = right.begin();
    
    while (itLeft != left.end() && itRight != right.end()) {
        if (*itLeft <= *itRight) {
            result.push_back(*itLeft);
            ++itLeft;
        } else {
            result.push_back(*itRight);
            ++itRight;
        }
    }
    
    while (itLeft != left.end()) {
        result.push_back(*itLeft);
        ++itLeft;
    }
    while (itRight != right.end()) {
        result.push_back(*itRight);
        ++itRight;
    }
}

void deque_mergeInsertionSort(std::deque<int>& arr) {
    if (arr.size() <= THRESHOLD) {
        deque_insertionSort(arr);
        return;
    }
    
    std::deque<int> left, right;
    int mid = arr.size() / 2;
    for (int i = 0; i < mid; ++i) {
        left.push_back(arr.front());
        arr.pop_front();
    }
    right = arr;

    deque_mergeInsertionSort(left);
    deque_mergeInsertionSort(right);
    
    arr.clear();
    deque_mergeLists(arr, left, right);
}

void	sort_deque(std::deque<int>& deque, char** argv, double& dtime) {
	clock_t	start = clock();
    
	fill_deque(deque, argv);
	deque_mergeInsertionSort(deque);
    
	clock_t	end = clock();
	dtime = (double)(end - start) / ((double)CLOCKS_PER_SEC /*  / 1000000.0 */ );
}
