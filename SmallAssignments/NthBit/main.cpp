#include <iostream>

using namespace std;

unsigned int getBit(unsigned int num, unsigned int i)
{
	return (num >> i) & 1U;
}

void setBit(unsigned int& num, unsigned int i, unsigned int x)
{
	x = !!x;

	num = (num & ~(1U << i)) | (x << i);
}

int main()
{
	unsigned int x = 5;

	cout << "Third bit of 5U is: " << getBit(x, 2) << endl;

	return 0;
}