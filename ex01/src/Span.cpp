#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _max_size(N)
{
	// std::cout << "constructor " << std::endl;
}
Span::~Span()
{
	// std::cout << "destructor " << std::endl;
}

Span::Span(const Span& orig) : _numbers(orig._numbers), _max_size(orig._max_size)
{
	// std::cout << "copy constructor " << std::endl;
}

Span& Span::operator = (const Span& orig)
{
	// std::cout << "copy assignment operator " << std::endl;
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
		throw std::runtime_error("addNumber(" + std::to_string(n) + "): vector is full");
	}
}

void Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	unsigned int range = std::distance(first, last);

	std::cout << "range: " << range << ", _numbers.size(): " << _numbers.size() << ", _max_size: " << _max_size << std::endl;
	if (_numbers.size() + range > _max_size)
	{
		throw std::runtime_error("addRange: hitting limit (max_size) for the vector");
	}
	_numbers.insert(_numbers.end(), first, last);
}

int Span::shortestSpan() 
{
	if (_numbers.size() < 2)
	{
		throw std::runtime_error("vector doesnt contain enough (> 2) values to calculate span");
	}
	std::vector<int> copy(_numbers);
	std::sort(copy.begin(), copy.end());
	int span = abs(copy.at(0) - copy.at(1));
	int	temp = copy.at(1);
	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); ++it)
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
	int	smallest = *std::min_element(_numbers.begin(), _numbers.end());
	int biggest = *std::max_element(_numbers.begin(), _numbers.end());
	return (biggest - smallest);
}