
#include "stdafx.h"
#include <iostream>
using namespace std;
inline int max(int a,int b,int c)   // 这是一个内置函数，
                                                 // 求3个整数中的最大者
{if (b>a) a=b;
 if (c>a) a=c;
 return a;
} 


int main13()
{
	int i=7,j=10,k=25,m;
 m=max(i,j,k);
 cout<<"max="<<m<<endl;


	system("pause");
 return 0;
}