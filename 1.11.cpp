#include <iostream>

int main(){
	int begin , end;
	std::cout << "Plase input two number, I will output all number between those "<<std::endl;
	std::cin>>begin>>end;
	while (begin <= end) {
		std::cout<<begin<<std::endl;
		++begin;
	}
	return 0;
}