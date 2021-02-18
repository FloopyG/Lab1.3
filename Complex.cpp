#include <iostream>
#include "Complex.h"

using namespace std;

void Complex::setX(double value) {
	x = value;
}

void Complex::setY(double value) {
	y = value;
}

bool Complex::Init(double x, double y) {
	if (abs(x) <= 1000 && abs(y) <= 1000) {
		setX(x);
		setY(y);
		return true;
	}
	else {
		return false;
	}
}

void Complex::Read() {
	double x, y;
	do {
		cout << "Enter Re: "; cin >> x;
		cout << "Enter Im: "; cin >> y;
	} while (!Init(x, y));
	Init(x, y);
}

void Complex::Display() {
	cout << "Re: " << x << endl;
	cout << "Im: " << y << endl;;
}

string Complex::toString() const {
	stringstream sout;

	if (y >= 0) {
		sout << x << "+" << y << "*i";
	}
	else {
		sout << x << y << "*i";
	}

	return sout.str();
}

Complex sub(Complex l, Complex r) {
	Complex t;

	t.x = l.x - r.x;
	t.y = l.y - r.y;

	return t;
}

Complex div(Complex l, Complex r) {
	Complex t;

	t.x = (l.x * r.x + l.y * r.y) / (r.x * r.x + r.y * r.y);
	t.y = (r.x * l.y - l.x * r.y) / (r.x * r.x + r.y * r.y);

	return t;
}

Complex conj(Complex m) {
	Complex t;

	t.x = m.x;
	t.y = -m.y;

	return t;
}