// hallo C++.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
template<typename T>
void sort(T a[]){
	int i,j;
	T t;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}

int maint()
{
	int i;
	long a[5]={10100,-123456,1198747,-16541,3456};
	int b[5]={1,9,0,23,-45};
	float c[5]={1.3,11.47,-6.55,3.45,-2.3};
//	void sort(long []);
//	void sort(int []);
//	void sort(float []);
	 sort(a);
	 sort(b);
	 sort(c);
	 for(i=0;i<5;i++)
		 cout<<a[i]<<",";
	 cout<<endl;
	 for(i=0;i<5;i++)
		 cout<<b[i]<<",";
	 	 cout<<endl;
	 for(i=0;i<5;i++)
		 cout<<c[i]<<",";
		 cout<<endl;
return 0;
}

