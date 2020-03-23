#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int mainp(){
	int maxpointer(int x,int *y);
	int a=rand(),b=rand(),c;
	cout<<"a=:"<<a<<"b=:"<<b<<endl;
	c=maxpointer(a,&b);              //函数调用时，第二个参数需传给变量b的地址，也就是变量b的指针
	cout<<"max is:"<< c<<endl;
	return 0;
}
int maxpointer(int x,int *y){       //函数定义参数分别为整型变量x和整形变量指针y

	if(x>*y)                   //y是整形变量指针，*y才是y指针指向的变量值，因此是x与*y进行比较，而不能x和y直接进行比较
		return x;              //第一个变量可直接返回
	else return *y;            //第二个变量需返回指针指向的变量值

}