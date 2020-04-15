#include "stdafx.h"

#include <iostream>
using namespace std;
class Box310
{
public:
	Box310(int = 10, int = 10, int = 10);
	int volume();

private:

	int height;
	int width;
	int length;
};

Box310::Box310(int h, int w, int len)
{
	height = h;
	width = w;
	length = len;
}

int Box310::volume()
{
	return(height * width * length);
}


int main310()
{

	Box310 box1(15, 30, 25);
	cout << "box1的体积= " << box1.volume() << endl;
	Box310 box2=box1,box3=box2;
	//Box310 box2(box1), box3(box2);
	cout << "box2的体积= " << box2.volume() << endl;
	cout << "box3的体积= " << box3.volume() << endl;
	return 0;
}
