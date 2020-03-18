#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename T>
T max8(T a,T b,T c)  //用虚拟类型T表示类型
{if(b>a) a=b;
if(c>a) a=c;
return a;
}

int main8()
{int i1=8,i2=5,i3=6,i;
double d1=56.9,d2=90.765,d3=43.1,d;
long g1=67843,g2=-456,g3=78123,g;
i=max8(i1,i2,i3);
d=max8(d1,d2,d3);
g=max8(g1,g2,g3);
cout<<"i_max="<<i<<endl;
cout<<"d_max="<<d<<endl;
cout<<"g_max="<<g<<endl;


	system("pause");
 return 0;
}