#include <iostream>

int main(){
	int v1 = 0,v2 = 0;
	//std::cout << "Entry two numbers:"<< std::endl;
	std::cout << "Entry two numbers:";
	std::cout << std::endl;
	//std::cin >> v1 >> v2;
	std::cin >> v1;
	std::cin >> v2;
	//std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	std::cout << "The product of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;

	return 0;
}