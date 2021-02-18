#pragma once
#include <string>
#include <sstream>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	double getX() const { return x; };
	double getY() const { return y; };
	void setX(double);
	void setY(double);

	bool Init(double x, double y);
	void Read();
	void Display();
	string toString() const;

	friend Complex sub(Complex l, Complex r);
	friend Complex div(Complex l, Complex r);
	friend Complex conj(Complex m);
};
