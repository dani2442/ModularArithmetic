#include "Congruence.h"
#include <iostream>

int main() {

	//std::cout<<math::mcm(12, 7);

	auto r=math::decompose(14);
	//std::vector<int>solution = math::solve(56, 42, 105);
	
	//std::vector<int> a{ 3,2, 5}, b{ 2,1,2 }, m{ 8,5,3 };
	//math::solve(a, b, m);

	std::cout<<math::mod(1234, 12, 123);
	//std::cout<<math::mod(6, 3, 7);
	getchar();
}