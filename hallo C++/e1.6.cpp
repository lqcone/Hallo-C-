#include "stdafx.h"
#include <iostream>
using namespace std;
int max6(int a,int b,int c)           //��3�������е������
{ if (b>a) a=b;
if (c>a) a=c;
return a; 
} 
float max6(float a,float b, float c)  //��3��ʵ���е������
{if (b>a) a=b;
 if (c>a) a=c;
 return a; 
} 
long max6(long a,long b,long c)  //��3���������е������
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
m= max6(a,b,c);                        //����ֵΪ����
cout <<"max_i="<<m<<endl;
float n;
n=max6(d,e,f);                          //����ֵΪʵ��
cout<<"max_f="<<n<<endl;
long int p;
p=max6(g,h,i);                          //����ֵΪ������
cout<<"max_l="<<p<<endl;


	system("pause");
 return 0;
}