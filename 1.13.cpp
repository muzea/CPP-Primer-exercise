#include <iostream>

int main(){
	//1.9
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
		sum += i;
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	//1.10
	for (int i = 10; i >= 0 ; --i)
		std::cout << i << std::endl;
	//1.11
	int begin , end;
	std::cout << "Plase input two number, I will output all number between those "<<std::endl;
	std::cin>>begin>>end;
	for ( ; begin <= end ; ++begin)
		std::cout << begin << std::endl;
	return 0;
}