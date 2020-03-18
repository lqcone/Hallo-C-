
#include "stdafx.h"
#include <iostream>
using namespace std;

class Time{
private:
	int hour;
	int minute;
	int sec;
public:
inline 	void setdata();
inline	void display();
};
int main24(){
	Time t1;   
//访问操作对象t1
	t1.setdata();
	t1.display();
//访问操作对象它
	Time t2;
	t2.setdata();
	t2.display();
 return 0;
}
void Time::setdata(){
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void Time::display(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}



/*class Time{
public:
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int sec;
};*/
/*int main24()
{
	Time t1;
	t1.set_time();
	t1.show_time();

	Time t2;
	t2.set_time();
	t2.show_time();
	system("pause");
 return 0;
}
void Time::set_time(){
	cin>>hour;
	cin>>minute;
	cin>>sec;
}
void Time::show_time(){
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
*/