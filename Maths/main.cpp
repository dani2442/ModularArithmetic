#include "Congruence.h"
#include <iostream>

int main() {
	// Bezout
	int u, v;
	math::bezout(23, 5, u, v);

	// Decomposition
	math::Decomposition dec = math::decompose(100);

	// Inverse
	int sol = math::inverse(17, 4);

	// isPrime
	bool isP = math::isPrime(24);

	// Greatest Common Divisor
	int gcd1=math::gcd(12, 45);

	// Least Common Multiple
	int lcm1 = math::lcm(12, 45);

	// a^b (mod m)
	int mod1=math::mod(123, 12, 17);

	// Find next prime
	int prime2=math::nextPrime(100);

	// Euler's totient function
	int phi=math::totient(23);

	// 1 equation solver
	auto x1 = math::solve(56, 42, 105);
	
	// system of equation solver
	std::vector<int> a{ 3,2, 5}, b{ 2,1,2 }, m{ 8,5,3 };
	auto x2 = math::solve(a, b, m);

	getchar();

}