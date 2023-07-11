/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeStack.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:17:58 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/11 18:13:33 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_STACK_H
# define FREE_STACK_H
# include "AMateria.hpp"

struct Node
{
	Node();
	Node(void* addr);
	Node(Node& other);
	~Node();
	Node& operator=(Node& other);
	
	Node*	next;
	void*	addr;
};


class FreeStack {
	
	public:
		FreeStack();
		FreeStack(FreeStack& other);
		~FreeStack();
		FreeStack& operator=(FreeStack& other);
		void push(void* addr);
		void pop(void);
	private:
		Node *_head;

};


#endif