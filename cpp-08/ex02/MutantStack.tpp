// constructors and destructor 🏗️💣

template<class T>
MutantStack<T>::MutantStack() {}

template<class T>
MutantStack<T>::MutantStack(const MutantStack& other) {
	(void)other;
	//copy
}

template<class T>
MutantStack<T>::~MutantStack() {}

//getters 🫳

// overloads 💯

template<class T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

template<class T>
std::ostream& operator<<(std::ostream& out, const MutantStack<T>& obj) {
	return (out);
}

// methods
