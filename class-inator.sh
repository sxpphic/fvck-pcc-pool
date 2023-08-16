#!/bin/bash

# The class-inator trans${class_name}s every word you pass as parameter in a C++ CLASS hahahahahaa, it's my best invention !!!

if [ $# -ne 1 ]; then
	echo "Usage: $0 <class_name>"
	exit 1
fi

class_name=$1

header_file="${class_name}.hpp"

touch "${header_file}"

cat << EOF >> ${header_file}
#ifndef ${class_name}_H
# define ${class_name}_H
# include <iostream>
# include <string>

class ${class_name} {
	
	public:
		${class_name}();
		${class_name}(const ${class_name}& other);
		~${class_name}();
		${class_name}& operator=(const ${class_name}& other);

	private:
};

std::ostream&	operator<<(std::ostream& out, const ${class_name}& obj);

#endif

EOF

echo "Created ${header_file} 🫡"

source_file="${class_name}.cpp"

touch "${source_file}"

cat << EOF > ${source_file}
#include "${class_name}.hpp"

// constructors and destructor 🏗️💣

${class_name}::${class_name}() {}

${class_name}::${class_name}(const ${class_name}& other) {
	(void)other;
	//copy
}

${class_name}::~${class_name}() {}

//getters 🫳

// overloads 💯

${class_name}& ${class_name}::operator=(const ${class_name}& other) {
	if (this == &other)
		return (*this);
	// copy
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const ${class_name}& obj) {
	return (out);
}

// methods



EOF

echo "Created ${source_file} 🫡"



