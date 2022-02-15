#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter string to search in" << endl;

	string input{ "" };
	getline(cin, input);

	cout << endl << "Enter string to search for" << endl;

	string search{ "" };
	getline(cin, search);

	bool found = false;

	for (int c = 0; c < input.length(); c++)
		if (input[c] == search[0])
		{
			if (search.length() == 1)
			{
				found = true;
				break;
			}
			else
				for (int q = 1; q < search.length(); q++)
					if (input[c + q] == search[q])
						found = true;
					else
					{
						found == false;
						break;
					}
		}

	string output = found ? "Found" : "Not found";
	cout << endl << output << endl;

	return 0;
}