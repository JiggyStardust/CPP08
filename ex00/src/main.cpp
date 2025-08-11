#include "../inc/easyfind.hpp"

int main(void)
{
	std::cout << "\n1. VECTOR\n";

	std::cout << "\nShould find:\n";
	std::vector<int> vec = {0, 1, 2, 3, 4};

	try {
		easyfind(vec, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nShouldn't find:\n";
	vec = {0, 1, 2, 3, 4};

	try {
		easyfind(vec, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n2. ARRAY\n";

	std::cout << "\nShould find:\n";

	int arr[5] = {0, 1, 2, 3, 4};

	try {
		easyfind(arr, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nShouldn't find:\n";

	int arr2[5] = {0, 1, 2, 3, 4};

	try {
		easyfind(arr2, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n3. DEQUE\n";

	std::cout << "\nShould find:\n";

	std::deque<int> deq = {0, 1, 2, 3, 4};

	try {
		easyfind(deq, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nShouldn't find:\n";

	deq = {0, 1, 2, 3, 4};

	try {
		easyfind(deq, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n4. LIST\n";

	std::cout << "\nShould find:\n";

	std::list<int> lst = {0, 1, 2, 3, 4};

	try {
		easyfind(lst, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << "\nShouldn't find:\n";

	try {
		easyfind(deq, 5);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	return 0;
}