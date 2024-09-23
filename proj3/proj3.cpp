#include <iostream>
using namespace std;

using VEC = int*;
using MATRIX = VEC*;

int a = 5;
VEC v = &a;
MATRIX m = &v;

int main() {
	std::cout << "value of a using v: " << *v << "\n";
	std::cout << "value of a using m: " << **m << "\n";

	return 0;
}