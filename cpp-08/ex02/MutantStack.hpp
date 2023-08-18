#ifndef MutantStack_H
# define MutantStack_H
# include <iostream>
# include <string>
# include <stack>

template<class T>
class MutantStack : public std::stack<T> {
	
	public:
		MutantStack();
		MutantStack(const MutantStack& other);
		~MutantStack();
		MutantStack& operator=(const MutantStack& other);

	private:
};

#include "MutantStack.tpp"

#endif

