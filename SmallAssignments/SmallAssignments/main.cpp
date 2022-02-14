#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string Compress(string input)
{
	string output{ "" };
	int counter = 1;

	output = input[0];

	for (int c = 1; c < input.size(); c++)
	{
		if (output[output.size() - 1] == input[c])
			counter++;
		else
		{
			if(counter != 1)
				output += to_string(counter);
			counter = 1;
			output += input[c];
		}
	}

	if (counter != 1)
		output += to_string(counter);

	return output;
}

string Decompress(string input)
{
	string output{ "" };
	char reference = input[0];
	int comparator{ 0 };

	for (int c = 0; c < input.size(); c++)
	{
		stringstream str;

		str << input[c];
		str >> comparator;

		if (comparator != 0)
			for (int q = 0; q < comparator - 1; q++)
				output += reference;
		else
		{
			reference = input[c];
			output += reference;
		}
	}

	return output;
}

int main()
{
	cout << "Enter string to compress" << endl;
	string input{ "" };
	cin >> input;

	string compressed = Compress(input);
	string decompressed = Decompress(compressed);

	cout << "Compressed: " << compressed << endl;
	cout << "Decompressed" << decompressed << endl;

	return 0;
}