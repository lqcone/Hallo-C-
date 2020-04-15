#include "stdafx.h"

#include <iostream>
using namespace std;
class Complex43
{
public:
	Complex43() { real = 0; imag = 0; }
	Complex43(double r) { real = r; imag = 0; }
	Complex43(double r, double i) { real = r; imag = i; }
	friend Complex43 operator+ (Complex43& c1, Complex43& c2);
	void display();
private:
	double real;
	double imag;
};

Complex43 operator+ (Complex43& c1, Complex43& c2)
{
	return Complex43(c1.real + c2.real, c1.imag + c2.imag);
} // 显式调用构造函数

void Complex43::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}


int main()
{
	Complex43 c1(3, 4), c2(5, -10), c3;
	c3 = c1 + c2;
	cout << "c1="; c1.display();
	cout << "c2="; c2.display();
	cout << "c1+c2="; c3.display();
	return 0;
}
