#pragma once

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <array>
#include <deque>
#include <list>

template <typename T> void easyfind(const T &array, const int &val)
{
	auto it = std::find(std::begin(array), std::end(array), val);
	if (it != std::end(array))
	{
		std::cout << val << " was found in position: " << *it << std::endl;
	}
	else
	{
		throw std::runtime_error(std::to_string(val) + " not found");
	}
}
