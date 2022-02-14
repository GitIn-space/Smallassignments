#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	cout << "Enter integer < 10 to search for" << endl;

	int find{ 0 };
	cin >> find;
	if (find > 9 || find < 0)
		cout << endl << "Read instructions" << endl;
	else
	{
		cout << endl << "Enter integer to search in" << endl;

		string input{ "" };
		cin >> input;

		int comparator{ 0 };

		for (int c = 0; c < input.size(); c++)
		{
			stringstream str;

			str << input[c];
			str >> comparator;

			if (comparator == find)
			{
				cout << endl << "Found" << endl;
				return 0;
			}
		}
		cout << endl << "Not found" << endl;
	}

	return 0;
}