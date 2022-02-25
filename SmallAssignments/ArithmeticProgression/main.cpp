#include <iostream>
#include <vector>

using namespace std;

bool isArithmeic(vector<int>* collection)
{
	int arithmetic = (*collection)[1] - (*collection)[0];
	bool progression = true;

	for (int c = 1; c < collection->size() - 2; c++)
		if (((*collection)[c + 1] - (*collection)[c]) != arithmetic)
			progression = false;

	return progression;
}

int main()
{
	vector<int> collection = { 2, 4, 6, 8 };
	
	cout << (isArithmeic(&collection) ? "Is arithmetic" : "Is not arithmetic") << endl;

	return 0;
}