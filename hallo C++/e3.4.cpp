#include "stdafx.h"

#include <iostream>
using namespace std;
class Box34
{
public:
	Box34(int w = 10, int h = 10, int len = 10);
	int volume34();
private:
	int height;
	int width;
	int length;
};
Box34::Box34(int w, int h, int len)
{
	height = h;
	width = w;
	length = len;
}

int Box34::volume34()
{
	return(height * width * length);
}
int main34()
{
	Box34 box1;
	cout << "box1 体积= " << box1.volume34() << endl;
	Box34 box2(15);
	cout << "box2 体积 " << box2.volume34() << endl;
	Box34 box3(15, 30);
	cout << "box3 体积 " << box3.volume34() << endl;
	Box34 box4(15, 30, 20);
	cout << "box4 体积" << box4.volume34() << endl;
	return 0;
}