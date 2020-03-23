#include "stdafx.h"

#include <iostream>
using namespace std;
class Box33
{
public:
	Box33();
	Box33(int h, int w, int len) : height(h), width(w), length(len) { }
	int volume33();
private:
	int height;
	int width;
	int length;
};
Box33::Box33()
{
	height = 10;
	width = 10;
	length = 10;
}

int Box33::volume33()
{
	return(height * width * length);
}
int main33()
{
	Box33 box1;
	cout << "box1 体积= " << box1.volume33() << endl;
	Box33 box2(15, 30, 25);
	cout << "box2 体积= " << box2.volume33() << endl;
	return 0;
}