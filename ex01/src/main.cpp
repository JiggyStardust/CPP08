#include "../inc/Span.hpp"

int gen()
{
	static int i = -2147483648;
	i += 1000;
	return (i);
}

int main()
{
	try 
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(15);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try 
	{
		Span sp1(30000);
		std::vector<int> v(10000);
		std::generate(v.begin(), v.end(), gen);
		sp1.addRange(v.begin(), v.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		std::vector<int> v1(10000);
		std::generate(v1.begin(), v1.end(), gen);
		sp1.addRange(v1.begin(), v1.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		std::vector<int> v2(10000);
		std::generate(v2.begin(), v2.end(), gen);
		sp1.addRange(v2.begin(), v2.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		std::vector<int> v3(10000);
		std::generate(v3.begin(), v3.end(), gen);
		sp1.addRange(v3.begin(), v3.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}