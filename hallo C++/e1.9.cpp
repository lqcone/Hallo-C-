#include "stdafx.h"
#include <iostream>
using namespace std;
int main9()
{
	int a=10;
int &b=a;    //����b��a������
a=a*a;       //a��ֵ�仯�ˣ�b��ֵҲӦһ��仯
cout<<a<<"  "<<b<<endl;   
b=b/5;        //b��ֵ�仯�ˣ�a��ֵҲӦһ��仯
cout<<b<<"  "<<a<<endl;

	system("pause");
 return 0;
}