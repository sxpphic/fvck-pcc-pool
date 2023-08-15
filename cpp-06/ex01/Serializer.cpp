#include "Serializer.hpp"

// constructors and destructor 🏗️💣

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& other) {
	//copy
	(void)other;
}

Serializer::~Serializer() {}

//getters 🫳

// overloads 💯

Serializer& Serializer::operator=(const Serializer& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

// methods

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}


