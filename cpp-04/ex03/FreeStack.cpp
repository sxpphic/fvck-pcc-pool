/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FreeStack.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:17:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/07/11 18:29:37 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FreeStack.hpp"

// node

Node::Node() : next(NULL), addr(NULL) {}

Node::Node(void* addr) : next(NULL), addr(addr) {}

Node::Node(Node& other) {
	addr = other.addr;
	next = other.next;
}

Node& Node::operator=(Node& other) {
	addr = other.addr;
	next = other.next;
	return (*this);
}

Node::~Node() {}

// stack

FreeStack::FreeStack() : _head(NULL) {}

FreeStack::FreeStack(FreeStack& other) {
	_head = other._head;
}

FreeStack::~FreeStack() {
	while (_head)
		pop();
}

FreeStack& FreeStack::operator=(FreeStack& other) {
	_head = other._head;
	return (*this);
}

void FreeStack::push(void* addr) {
	if (!addr)
		return ;

	Node* newNode = new Node(addr);

	if (!_head) {
		_head = newNode;
	} else {
		newNode->next = _head;
		_head = newNode;
	}
};

void FreeStack::pop(void) {
	Node* temp;
	if (_head) {
		temp = _head->next;
		delete reinterpret_cast<AMateria*>(_head->addr);
		delete _head;
		_head = temp;
	}
}

