#include <iostream>
#include <string>

using namespace std;

int main()
{
	string collection = "Hello";

	cout << collection << endl;

	string output = "";

	for (int c = collection.size() - 1; c > -1; c--)
		output += collection[c];

	cout << output << endl;

	return 0;
}