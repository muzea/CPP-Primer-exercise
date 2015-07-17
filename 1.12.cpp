#include <iostream>

int main(){
	int sum = 0;
	/*
	*求和
	*区间 [-100,100]
	*/
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << "sum is " << sum << std::endl;
	return 0;
}