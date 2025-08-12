#pragma once

#include <algorithm>
#include <cmath>
#include <exception>
#include <iostream>
#include <string>
#include <vector>

class Span {
	private:
		std::vector<int> _numbers;
		unsigned int	_max_size;

	public:
		Span(unsigned int N = 0);
		~Span();
		Span(const Span& orig);
		Span& operator = (const Span& orig);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};