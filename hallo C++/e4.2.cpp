#include "stdafx.h"

#include <iostream>
using namespace std;
class Complex42
{
public:
	Complex42() { real = 0; imag = 0; }
	Complex42(double r, double i) { real = r; imag = i; }
	Complex42 operator + (Complex42& c2);
	void display();
private:
	double real;
	double imag;
};


Complex42 Complex42::operator + (Complex42& c2)
{
	Complex42 c;
	c.real = real + c2.real;
	c.imag = imag + c2.imag;
	return c;
}

void Complex42::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}





int main42()
{
	Complex42 c1(3, 4), c2(5, -10), c3;
	c3 = c1 + c2;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	cout << "c1+c2="; c3.display();
	return 0;

}
