#include <iostream>

using namespace std;

bool Palindrome(char* leftChar, int left, char* rightChar, int right)
{
	if (left == right || right < left)
		return true;

	if (*leftChar == *rightChar)
		return Palindrome(++leftChar, ++left, --rightChar, --right);

	return false;
}

int main()
{
	cout << "Enter palindrome" << endl;

	string input{ "" };
	cin >> input;

	cout << endl << Palindrome(&input[0], 0, &input[input.length() - 1], input.length() - 1) << endl;

	return 0;
}