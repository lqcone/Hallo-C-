#include "stdafx.h"

#include <iostream>
using namespace std;
class Box39
{
public:
	Box39(int = 10, int = 10, int = 10);
	int volume();
private:
	int height;
	int width;
	int length;
};

Box39::Box39(int h, int w, int len)
{
	height = h;
	width = w;
	length = len;
}

int Box39::volume()
{
	return(height * width * length);
}


int main39()
{


	Box39 box1(15, 30, 25), box2;
	cout << "box1 体积= " << box1.volume() << endl;
	box2 = box1;
	cout << "box2 体积= " << box2.volume() << endl;
	return 0;
}
