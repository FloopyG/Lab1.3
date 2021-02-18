#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex z, m, g;
	string s;

	z.Read();
	z.Display();
	m.Read();
	m.Display();

	cout << "Object 1 to string: " << endl;

	s = z.toString();
	cout << s << endl << endl;

	cout << "Object 1 and 2 substraction: " << endl;

	g = sub(z, m);
	s = g.toString();
	cout << s << endl << endl;

	cout << "Object 1 and 2 division: " << endl;

	g = div(z, m);
	s = g.toString();
	cout << s << endl << endl;

	cout << "Object which is conjugated to object 1: " << endl;

	g = conj(z);
	s = g.toString();
	cout << s << endl << endl;

	cin.get();
	system("pause");
	return 0;
}
