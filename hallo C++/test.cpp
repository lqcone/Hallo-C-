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

class Timet {
private:
	int hour;
	int minute;
	int sec;

};

int  maint()
{
	Timet t1;
	return 0;
}

