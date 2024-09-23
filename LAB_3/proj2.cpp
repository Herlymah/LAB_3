#include <iostream>
using namespace std;
double x;
double y;

double* ptrx = &x;
double* ptry = &y;

double static pointerSum(double* x, double* y) {
	return *x + *y;
}

int main() {

	std::cout << "Enter the value for x : ";
	std::cin >> x;

	std::cout << "Enter the value for y: ";
	std::cin >> y;


	std::cout << "The value of x is: " << x << "\n";
	std::cout << "The value of y is: " << y << "\n";
	std::cout << "The sum of x + y is: " << pointerSum(ptrx, ptry) << "\n";

	return 0;
}