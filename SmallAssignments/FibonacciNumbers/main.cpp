#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Fibonacci(vector<int>* sequence, int limitInclusive, int index, string* output)
{
	if (index <= limitInclusive)
	{
		sequence->push_back(sequence->at(sequence->size() - 2) + sequence->at(sequence->size() - 1));

		*output += to_string(sequence->at(sequence->size() - 1));
		if (sequence->size() <= limitInclusive)
			*output += ',';

		Fibonacci(sequence, limitInclusive, ++index, output);
	}
}

string Fibonacci(vector<int>* sequence, int limitInclusive)
{
	string output{ "" };

	for (int c = 0; c < limitInclusive - 1; c++)
		sequence->push_back(sequence->at(sequence->size() - 2) + sequence->at(sequence->size() - 1));

	for (int c = 0; c < sequence->size(); c++)
	{
		output += to_string(sequence->at(c));
		if (c < sequence->size() - 1)
			output += ',';
	}

	return output;
}

int main()
{
	cout << "Enter how many Fibonacci iterations" << endl;

	int input{ 0 };
	cin >> input;

	vector<int>* sequence = new vector<int>();
	sequence->push_back(0);
	sequence->push_back(1);

	cout << endl << "Iterative" << endl << Fibonacci(sequence, input) << endl;

	sequence->clear();
	sequence->push_back(0);
	sequence->push_back(1);

	string* output = new string("0,1,");

	Fibonacci(sequence, input, 2, output);

	cout << endl << "Recursive" << endl << *output << endl;

	return 0;
}