
#include <iostream>


int64_t ModPow(int64_t base, int64_t exponent, int64_t mod);

int main()
{
	std::cout << "123^456 mod 789 is "              << ModPow(123, 456, 789)              << '\n';
	std::cout << "19^1 mod 23 is "                  << ModPow(19, 1, 23)                  << '\n';
	std::cout << "256^40 mod 100 is "               << ModPow(256, 40, 100)               << '\n';
	std::cout << "4321^5678 mod 9876 is "           << ModPow(4321, 5678, 9876)           << '\n';
	std::cout << "72^256 mod 99 is "                << ModPow(72, 256, 99)                << '\n';
	std::cout << "784321^989125 mod 1356974152 is " << ModPow(784321, 989125, 1356974152) << '\n';

	return 0;
}

int64_t ModPow(int64_t b, int64_t e, int64_t m)
{
	int64_t result = 1;
	int64_t pow = b % m;

	for (int64_t a = 1; a <= e; a <<= 1) {
		if (a & e) result = (result * pow) % m;
		pow = (pow * pow) % m;
	}

	return result;
}
