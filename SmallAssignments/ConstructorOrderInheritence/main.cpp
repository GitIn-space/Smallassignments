#include <iostream>

using namespace std;

class A
{
public:
	A()
	{
		cout << "A constructor" << endl;
	}

	~A()
	{
		cout << "A destructor" << endl;
	}
};

class B : A
{
public:
	B()
	{
		cout << "B constructor" << endl;
	}

	~B()
	{
		cout << "B destructor" << endl;
	}
};

class C : B
{
public:
	C()
	{
		cout << "C constructor" << endl;
	}

	~C()
	{
		cout << "C destructor" << endl;
	}
};

int main()
{
	A a;

	cout << endl;

	B b;

	cout << endl;

	C c;

	cout << endl;

	return 0;
}