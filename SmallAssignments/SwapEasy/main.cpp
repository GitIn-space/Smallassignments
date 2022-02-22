#include <iostream>

using namespace std;

void swapInts(int& x, int& y)
{
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
}

int main()
{
	int a = 5;
	int b = 3;

	cout << "Before swap: " << a << " " << b << endl;

	swapInts(a, b);

	cout << "After swap: " << a << " " << b << endl;

	return 0;
}