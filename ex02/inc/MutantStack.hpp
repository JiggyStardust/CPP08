#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <stack>


template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() = default;
		~MutantStack() = default;
		MutantStack(const MutantStack& orig) = default;
		MutantStack& operator = (const MutantStack& orig) = default;


		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin();
		iterator end();
		const_iterator cbegin() const;
		const_iterator cend() const;
		reverse_iterator rbegin();
		const_reverse_iterator crbegin() const;
		reverse_iterator rend();
		const_reverse_iterator crend() const;

};

#include "MutantStack.tpp"