#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter your lucky number" << endl;


	string input{ "" };
	cin >> input;

	vector<int> uniques = vector<int>();
	bool lucky = true;

	for (int c = 0; c < input.length(); c++)
		if (!(find(uniques.begin(), uniques.end(), input[c]) != uniques.end()))
			uniques.push_back(input[c]);
		else
		{
			lucky = false;
			break;
		}
	string output = lucky ? "lucky" : "unlucky";
	cout << endl << "Your number is " << output << endl;

	return 0;
}