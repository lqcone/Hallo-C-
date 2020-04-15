#include "stdafx.h"

#include <iostream>
using namespace std;
class Complex41
{
private:
	double real;
	double imag;
public:
	Complex41() { real = 0; imag = 0; }
	Complex41(double r, double i) { real = r; imag = i; }
	Complex41 complex_add(Complex41& c2);
	void display();
};

Complex41 Complex41::complex_add(Complex41& c2)
{
	Complex41 c;
	c.real = real + c2.real;   c.imag = imag + c2.imag;
	return c;
}

void Complex41::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}


int main41()
{
	Complex41 c1(3, 4), c2(5, -10), c3;
	c3 = c1.complex_add(c2);
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	cout << "c1+c2="; c3.display();
	return 0;


}
