#include "stdafx.h"
#include <iostream>
using namespace std;
int max7(int a,int b,int c)     //��3�������е������
{if (b>a) a=b;
 if (c>a) a=c;
 return a;
}
int max7(int a, int b)         //�����������е������
{if (a>b) return a;
 else return b;
}

int main7()
{
	int a=7,b=-4,c=9;
 cout<<max7(a,b,c)<<endl; //���3�������е������
 cout<<max7(a,b)<<endl;  //������������е������

	system("pause");
 return 0;
}