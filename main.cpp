#include <iostream>
#include <string>
#include "vector.h"

int main()
{
	MyVector<std::string> vec;
	vec.push_back("cat");
	vec.push_back("dog");
	vec.push_back("horse");
	vec.push_back("cow");
	vec.push_back("rat");
	vec.pop_back(1);
	std::cout << vec.empty() << std::endl;
	std::cout << vec.size() << std::endl;
	std::cout << vec.capacity() << std::endl;
	vec.clear();
	std::cout << vec.empty() << std::endl;
	return 0;
}
