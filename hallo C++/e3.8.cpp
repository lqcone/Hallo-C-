#include "stdafx.h"

#include <iostream>
using namespace std;
class Time38
{
public:
    Time38(int, int, int);
    int hour;
    int minute;
    int sec;
};
Time38::Time38(int h, int m, int s)
{
    hour = h;
    minute = m;
    sec = s;
}
void fun( Time38& t)
{
    t.hour = 18;
}

int main38()
{
    
    
    Time38 t1(10, 13, 56);
    fun(t1);
    cout << t1.hour << endl;
    return 0;
}


