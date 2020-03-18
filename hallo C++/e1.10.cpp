#include "stdafx.h"
#include <iostream>
using namespace std;
void swap10(int a,int b)
{ int temp;
temp=a;
a=b;
b=temp;}

int main10()
{
	int i=3,j=5;
swap10(i,j);
cout<<i<<","<<j<<endl; 

	system("pause");
 return 0;
}