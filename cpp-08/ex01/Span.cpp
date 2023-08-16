#include "Span.hpp"

// constructors and destructor 🏗️💣

Span::Span() {}

Span::Span(const Span& other) {
	(void)other;
	//copy
}

Span::~Span() {}

//getters 🫳

// overloads 💯

Span& Span::operator=(const Span& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Span& obj) {
	return (out);
}

// methods



