#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _max_size(N)
{
	std::cout << "constructor " << std::endl;
}
Span::~Span()
{
	std::cout << "destructor " << std::endl;
}

Span::Span(const Span& orig) : _numbers(orig._numbers), _max_size(orig._max_size)
{
	std::cout << "copy constructor " << std::endl;
}

Span& Span::operator = (const Span& orig)
{
	std::cout << "copy assignment operator " << std::endl;
	if (this != &orig)
	{
		_numbers = orig._numbers;
		_max_size = orig._max_size;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (_numbers.size() < _max_size)
	{
		_numbers.push_back(n);
	}
	else
	{
		throw std::runtime_error("addNumber(): vector is full");
	}
}

int Span::shortestSpan() 
{
	if (_numbers.size() < 2)
	{
		throw std::runtime_error("vector doesnt contain enough (> 2) values to calculate span");
	}
	int span = abs(_numbers.at(0) - _numbers.at(1));
	int	temp = _numbers.at(1);
	for (std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		if (abs(*it - temp) < span)
		{
			span = abs(*it - temp);
		}
		temp = *it;
	}
	return (span);
}

int Span::longestSpan() 
{
	if (_numbers.size() < 2)
	{
		throw std::runtime_error("vector doesnt contain enough (> 2) values to calculate span");
	}
	int	smallest = _numbers.at(0);
	int biggest = _numbers.at(0);

	for (std::vector<int>::iterator it = _numbers.begin(); it != _numbers.end(); ++it)
	{
		if (*it < smallest)
		{
			smallest = *it;
		}
		else if (*it > biggest)
		{
			biggest = *it;
		}
	}
	return (biggest - smallest);
}