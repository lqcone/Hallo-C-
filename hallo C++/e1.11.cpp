#include "stdafx.h"
#include <iostream>
using namespace std;
void swap11(int *p1,int *p2)
{int temp;
	temp=*p1;
	*p1= *p2;
	*p2=temp;
}

int main11()
{
	int i=3,j=5;
  swap11(&i,&j);
  cout<<i<<","<<j<<endl;

	system("pause");
 return 0;
}