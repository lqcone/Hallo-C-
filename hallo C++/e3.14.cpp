#include "stdafx.h"

#include <iostream>
#include<cmath>
using namespace std;
class Point	//Point������
{
public:	//�ⲿ�ӿ�
	Point(int xx = 0, int yy = 0) { X = xx; Y = yy; }
	int GetX() { return X; }
	int GetY() { return Y; }
	friend double Distance(Point& a, Point& b);
private:	//˽�����ݳ�Ա
	int X, Y;
};
double Distance(Point& a, Point& b)
{
	double dx = a.X - b.X;
	double dy = a.Y - b.Y;
	return sqrt(dx * dx + dy * dy);
}

int main314()
{

	Point p1(4.0, 6.0), p2(4.0, 6.0);
	double d = Distance(p1, p2);
	cout << "The distance is " << d << endl;
	return 0;

}
