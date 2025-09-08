#include "../inc/MutantStack.hpp"

// int main()
// {
// 	std::cout << "TEST 1." << std::endl;
	
// 	return 0;
// }

int main()
{
	MutantStack<int> mstack;

	std::cout << "The stack is empty: ";
	if (mstack.empty())
		std::cout << "true\n";
	mstack.push(5);
	mstack.push(17);
	std::cout << "The stack is empty: ";
	if (mstack.empty())
		std::cout << "true\n";
	else
		std::cout << "false\n";
	std::cout << "The size is: ";
	std::cout << mstack.size() << std::endl;
	std::cout << "On top we have: ";
	std::cout << mstack.top() << std::endl;
	mstack.pop();

	std::cout << "After popping the size is: ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "After 4 additional pushes the size is: ";
	std::cout << mstack.size() << std::endl;
	
	
	std::cout << "iterator:\n";
	MutantStack<int>::iterator it = mstack.begin();
	++it;
	--it;
	while (it != mstack.end())
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int> r(mstack);
	std::cout << "\nreverse_iterator:\n";
	MutantStack<int>::reverse_iterator rit = r.rbegin();
	MutantStack<int>::reverse_iterator rend = r.rend();
	while (rit != rend)
	{
		std::cout << *rit << std::endl;
		++rit;
	}


	std::cout << "\nCONST ITERATORS!\n";

	const MutantStack<int> s(mstack);
	std::cout << "\nconst_iterator for copy:\n";
	MutantStack<int>::const_iterator ite = s.cbegin();
	while (ite != s.cend())
	{
		std::cout << *ite << std::endl;
		++ite;
	}

	std::cout << "\nconst_reverse_iterator:\n";
	MutantStack<int>::const_reverse_iterator crit = r.crbegin();
	MutantStack<int>::const_reverse_iterator crend = r.crend();
	while (crit != crend)
	{
		std::cout << *crit << std::endl;
		++crit;
	}

	return 0;
}