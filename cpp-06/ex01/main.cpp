
#include "Serializer.hpp"

int main(void) {

	Data* 		random_data = new Data();
	Data*		deserialized_data;
	uintptr_t	buffer;

	random_data->some_data = "asdfdsf";

	buffer = Serializer::serialize(random_data);

	std::cout << reinterpret_cast<uintptr_t>(random_data) << std::endl;
	std::cout << buffer << std::endl;


	deserialized_data = Serializer::deserialize(buffer);

	std::cout << random_data->some_data << std::endl;
	std::cout << deserialized_data->some_data << std::endl;

	std::cout << random_data << std::endl;
	std::cout << deserialized_data << std::endl;


	




	delete random_data;

	return (0);
}