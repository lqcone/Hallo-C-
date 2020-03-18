
#include "stdafx.h"
#include <iostream>
using namespace std;
class Time{
public:
	int hour;
	int minute;
	int sec;
};
int main21(){
//定义对象	
	Time t1;
//	Time &t2=t1;

//输入数据
	cin>>(&t1)->hour;
	cin>>(&t1)->minute;
	cin>>(&t1)->sec;
//输出数据
	cout<<(&t1)->hour<<":"<<(&t1)->minute<<":"<<(&t1)->sec<<endl;

	return 0;
}













/*
class Time{
public:
	int hour;
	int minute;
	int sec;
};
int main21()
{
	Time t1;
	Time &t2=t1;
	cin>>t1.hour;
	cin>>t1.minute;
	cin>>t2.sec;
	cout<<t2.hour<<":"<<t2.minute<<":"<<t1.sec<<endl;
	system("pause");
 return 0;
}
*/