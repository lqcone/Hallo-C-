#include "stdafx.h"

#include <iostream>
using namespace std;
class Box36
{
public:
	Box36(int h=10, int w=12, int len=15) :height(h), width(w), length(len) { } // ��Ĭ�ϲ���ֵ�Ͳ�����
	int volume();
private:
	int height;
	int width;
	int length;
};

int Box36::volume()
{
	return(height * width * length);
}
int main36()
{
	Box36 a[3];
	cout << "a[0]������� " << a[0].volume() << endl;
	cout << "a[1]������� " << a[1].volume() << endl;
	cout << "a[2]������� " << a[2].volume() << endl;
	return 0;
}
// ÿ������Ԫ����һ������