#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int mainp(){
	int maxpointer(int x,int *y);
	int a=rand(),b=rand(),c;
	cout<<"a=:"<<a<<"b=:"<<b<<endl;
	c=maxpointer(a,&b);              //��������ʱ���ڶ��������贫������b�ĵ�ַ��Ҳ���Ǳ���b��ָ��
	cout<<"max is:"<< c<<endl;
	return 0;
}
int maxpointer(int x,int *y){       //������������ֱ�Ϊ���ͱ���x�����α���ָ��y

	if(x>*y)                   //y�����α���ָ�룬*y����yָ��ָ��ı���ֵ�������x��*y���бȽϣ�������x��yֱ�ӽ��бȽ�
		return x;              //��һ��������ֱ�ӷ���
	else return *y;            //�ڶ��������践��ָ��ָ��ı���ֵ

}