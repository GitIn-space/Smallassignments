#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool playing = true;

	while (playing)
	{
		srand(time(NULL));
		int number = rand() % 11;
		int tries = 1;
		bool guessing = true;
		string input = "";

		cout << "Guess my number between 0 - 10 (inclusive)" << endl;

		while (guessing)
		{
			cin >> input;

			try
			{
				if (stoi(input) == number)
					break;

				tries++;
			}
			catch(exception e)
			{
				cout << "Beep, it's a number" << endl;
			}

			cout << "Try again" << endl;
		}

		cout << "Finally, it only took you " << tries << " attempts. Play again? y/n" << endl;

		guessing = true;

		while (guessing)
		{
			cin >> input;

			if (input == "y")
				guessing = false;
			else if (input == "n")
			{
				guessing = false;
				playing = false;
			}
			else
				cout << "No, y or n" << endl;
		}
	}

	return 0;
}