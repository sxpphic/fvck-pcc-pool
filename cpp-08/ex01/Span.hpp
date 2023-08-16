#ifndef Span_H
# define Span_H
# include <iostream>
# include <string>

class Span {
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);

		void addNumber(int num);
		void shortestSpan();
		void longestSpan();
		void addRange();
		

	private:
};

std::ostream&	operator<<(std::ostream& out, const Span& obj);

#endif

