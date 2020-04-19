
#include <iostream>

using namespace std;


typedef unsigned long long ull;
unsigned long long ModPow(ull base, ull exponent, ull mod);


int main()
{
	cout << "123^456 mod 789 is " << ModPow(123, 456, 789) << '\n';
	cout << "19^1 mod 23 is " << ModPow(19, 1, 23) << '\n';
	cout << "256^40 mod 100 is " << ModPow(256, 40, 100) << '\n';
	cout << "4321^5678 mod 9876 is " << ModPow(4321, 5678, 9876) << '\n';
	cout << "72^256 mod 99 is " << ModPow(72, 256, 99) << '\n';
	cout << "784321^989125 mod 1356974152 is " << ModPow(784321, 989125, 1356974152) << '\n';

	return 0;
}


ull ModPow(ull b, ull e, ull m)
{
	ull result = 1;
	ull pow = b % m;

	for (ull a = 1; a <= e; a <<= 1) {
		if (a & e) {
			result = (result * pow) % m;
		}
		pow = (pow * pow) % m;
	}

	return result;
}