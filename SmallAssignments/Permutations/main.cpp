#include <string>
#include <iostream>

using namespace std;

//for fun, rewrite with pointer arithmetic

void Permute(string input, int left, int right)
{
	if (left == right)
		cout << input << endl;

	for (int c = left; c <= right; c++)
	{
		swap(input[left], input[c]);

		Permute(input, left + 1, right);

		swap(input[left], input[c]);
	}
}

int main()
{
	string input{ "" };

	cout << "Enter string to permute" << endl;
	cin >> input;
	cout << endl;

	Permute(input, 0, input.size() - 1);

	return 0;
}