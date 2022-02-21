#include <iostream>
#include <string>
#include <map>
#include <locale>

using namespace std;

int main()
{
	cout << "Enter string to interpret" << endl << endl;

	string input{ "" };
	getline(cin, input);

	map<char, int> letters{};
	locale loc;

	for (int c = 0; c < input.size(); c++)
		if (letters.find(toupper(input[c], loc)) != letters.end())
			letters[toupper(input[c], loc)]++;
		else
			letters.insert(pair<char, int>(toupper(input[c], loc), 1));

	for (map<char, int>::iterator it = letters.begin(); it != letters.end(); ++it)
		cout << it->first << " = " << it->second << endl;

	return 0;
}