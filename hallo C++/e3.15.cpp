#include "stdafx.h"

#include <iostream>
using namespace std;
class Date315;
class Time315
{
private:
	int hour;
	int minute;
	int sec;
public:
	Time315(int, int, int);
	void display(const Date315&);
};
class Date315
{
private:
	int month;
	int day;
	int year;
public:
	Date315(int, int, int);
	friend  Time315;
	void display();
};
Time315::Time315(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void Time315::display(const Date315& da)
{
	cout << da.month << "/" << da.day << "/" << da.year;
		cout << endl;
	cout << hour << ":" << minute << ":" << sec << endl;
}

Date315::Date315(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

int main315()
{

	Time315 t1(10, 13, 56);
	Date315 d1(12, 25, 2004);
	t1.display(d1);
	return 0;

}




