#include "stdafx.h"

#include <iostream>
using namespace std;
class Time
{
public:
	Time(int, int, int);
	 int hour;
	int minute;
	int sec;
	void get_time() const ;
    void set_minute() const { set_sec(); };
    void set_sec() const {  };
};

Time::Time(int h, int m, int s) :hour(h), minute(m), sec(s) {};

/*Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	sec = s;
}*/
void Time::get_time() const
{
	cout << hour << ":" << minute << ":" << sec << endl;
}

int main37()
{/*
    Time const t2(14, 53, 13);
    Time t3(15, 53, 13);
    Time t4(15,15,13);
    Time* p1;
    p1 = &t3;

    Time* const p2=&t3;
    p2->minute = 55;

     Time* const p3=&t4;
   // p3 = &t4;
    p3->minute = 25;
    t4.minute = 25;

    Time t1(10, 13, 56);
    Time* pt1;
    pt1 = new Time(16, 6, 15);
    delete pt1;
    Time* pt2;
    pt2 = new Time(14, 12, 45);
    int* p1 = &t1.hour;   //   ����ָ���Ա��ָ��p1
  //  cout << *p1 << endl;
    t1.get_time();        //    ���ó�Ա����
    Time* p2 = &t1;      //    ����ָ�����t1��ָ��p2
    p2->get_time();    //    �ö���ָ����ó�Ա����
    void (Time:: * p3)(); //   ����ָ���Ա������ָ��
  //  p3 = &Time::get_time; //  ����Ա������ָ�븳ֵ
 //   (t1.*p3)();  //  ��ָ���Ա������ָ����ó�Ա����
  */  
    return 0;
    
}
