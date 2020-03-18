#include "stdafx.h"
#include <iostream>
using namespace std;
int max6(int a,int b,int c)           //求3个整数中的最大者
{ if (b>a) a=b;
if (c>a) a=c;
return a; 
} 
float max6(float a,float b, float c)  //求3个实数中的最大者
{if (b>a) a=b;
 if (c>a) a=c;
 return a; 
} 
long max6(long a,long b,long c)  //求3个长整数中的最大者
{if (b>a) a=b;
 if (c>a) a=c;
 return a;
}

int main6()
{
	int a,b,c;  float d,e,f;  long g,h,i;
cin>>a>>b>>c; 
cin>>d>>e>>f;
cin>>g>>h>>i;
int m;
m= max6(a,b,c);                        //函数值为整型
cout <<"max_i="<<m<<endl;
float n;
n=max6(d,e,f);                          //函数值为实型
cout<<"max_f="<<n<<endl;
long int p;
p=max6(g,h,i);                          //函数值为长整型
cout<<"max_l="<<p<<endl;


	system("pause");
 return 0;
}