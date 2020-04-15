#include "stdafx.h"

#include <iostream>
using namespace std;
class Box311
{
public:
	Box311(int, int);
	static int volume();
	static int height;
	int width;
	int length;
};

Box311::Box311(int w, int len)
{
	width = w;
	length = len;
}
int Box311::volume()
{
	return 0;
}
int Box311::height = 10;

int main311()
{
	
		Box311 a(15, 20), b(20, 30);
		cout << a.height << endl;
		cout << b.height << endl;
		cout << Box311::height << endl;
		cout << Box311::volume() << endl;
		return 0;
	
}
