#include <iostream>

using namespace std;

int main()
{
	cout << "Enter first number to swap" << endl;

	int first{ 0 };
	cin >> first;

	cout << endl << "Enter first number to swap" << endl;

	int second{ 0 };
	cin >> second;

	first = first ^ second;
	second = first ^ second;
	first = first ^ second;

	cout << endl << first << "   " << second << endl;

	return 0;
}