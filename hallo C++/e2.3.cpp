
#include "stdafx.h"
#include <iostream>
using namespace std;


class Time{
public:
	int hour;
	int minute;
	int sec;
};
int main23(){
	Time t1;
    void setdata(Time &t);
	void display(Time t);
//访问操作对象t1
	setdata(t1);
	display(t1);
//访问操作对象它
	Time t2;
	setdata(t2);
	display(t2);
 return 0;
}
void setdata(Time &t){
	cin>>t.hour;
	cin>>t.minute;
	cin>>t.sec;
}
void display(Time t){
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}





/*int main23()
{
	Time t1;
	void set_time(Time &t);
	void show_time(Time t);
	set_time(t1);
	show_time(t1);

	Time t2;
	set_time(t2);
	show_time(t2);
	system("pause");
 return 0;
}
void set_time(Time &t){
	cin>>t.hour;
	cin>>t.minute;
	cin>>t.sec;
}
void show_time(Time t){
	cout<<t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
}

/*
class Time{
public:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;

	cin>>t1.hour;
	cin>>t1.minute;
	cin>>t1.sec;
	cout<<t1.hour<<":"<<t1.minute<<":"<<t1.sec<<endl;

	Time t2;
	cin>>t2.hour;
	cin>>t2.minute;
	cin>>t2.sec;
	cout<<t2.hour<<":"<<t2.minute<<":"<<t2.sec<<endl;
	system("pause");
 return 0;
}

*/