#include "stdafx.h"

#include <iostream>
using namespace std;
class Time313
{
public:
	Time313(int, int, int);
	friend void display(Time313&);
private:
	int hour;
	int minute;
	int sec;
};
Time313::Time313(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void display(Time313& t)
{
	cout << t.hour << ":" << t.minute << ":" << t.sec << endl;
}

int main313()
{

	Time313 t1(10, 13, 56);
	display(t1);
	return 0;

}
