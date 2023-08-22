#ifndef Serializer_H
# define Serializer_H
# include <iostream>
# include <string>
# include <inttypes.h>

struct	Data {
	std::string		some_data;
};

class Serializer {
	
	public:
		Serializer();
		Serializer(const Serializer& other);
		~Serializer();
		Serializer& operator=(const Serializer& other);

		static uintptr_t	serialize(Data* ptr);
		static Data* 		deserialize(uintptr_t raw);

	private:
};

#endif

