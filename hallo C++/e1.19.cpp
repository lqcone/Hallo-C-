#include "stdafx.h"
#include<stdio.h>
#include<iostream>
using namespace std;
int main19(){
	int max19(int x,int *y);
	int a=1,b=2,c;
	c=max19(a,&b);              //��������ʱ���ڶ��������贫������b�ĵ�ַ��Ҳ���Ǳ���b��ָ��
	cout<<c<<endl;
	return 0;
}
int max19(int x,int *y){       //������������ֱ�Ϊ���ͱ���x�����α���ָ��y
	if(x>*y)                   //y�����α���ָ�룬*y����yָ��ָ��ı���ֵ�������x��*y���бȽϣ�������x��yֱ�ӽ��бȽ�
		return x;              //��һ��������ֱ�ӷ���
	else return *y;            //�ڶ��������践��ָ��ָ��ı���ֵ

}