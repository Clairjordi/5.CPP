#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 1)
	{
		std::cout << "Error : please put arguments"<< std::endl;
		return 1;
	}
	try
	{
		PmergeMe numbers(++argv);
		numbers.sort();
		
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::cout;
	}
	return 0;
}