#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	cout << "Enter integer array akin to '9 5 2 8 3'. Enter any non-integer to end input" << endl;

	int input;
	vector<int> collection = vector<int>();

	while (cin >> input)
	{
		collection.push_back(input);
	}

	cout << endl << "Enter integer to search for" << endl;
	
	cin.clear();
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	cin >> input;

	vector<int> pos = vector<int>();

	for (int c = 0; c < collection.size(); c++)
		if (collection[c] == input)
			pos.push_back(c);

	string output = "Found at: ";

	for (int c = 0; c < pos.size(); c++)
	{
		output.append(to_string(pos[c]));
		if (c != pos.size() - 1)
			output.append(", ");
	}

	if (pos.size() == 0)
		output.append("-1");

	cout << endl << output << endl;

	return 0;
}