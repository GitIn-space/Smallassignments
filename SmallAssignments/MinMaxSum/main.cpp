#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter integer array akin to '9 5 2 8 3'. Enter any non-integer to end input" << endl;

	int input;
	int loops = 0;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	float average;

	while (cin >> input)
	{
		sum += input;

		if (input < min)
			min = input;

		if (input > max)
			max = input;

		loops++;
	}

	average = (float) sum / loops;

	cout << endl << "Sum: " << sum << endl << "Min: " << min << endl << "Max: " << max << endl << "Average: " << average << endl;

	return 0;
}