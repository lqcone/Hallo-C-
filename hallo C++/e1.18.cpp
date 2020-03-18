#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;
struct student 
{char name [10];
 int num;
 char sex;
};

int main18()
{
	student *p;
 p=new student;
 strcpy(p->name,"Wang Fun");
 p->num=10123;
 p->sex='M';
 cout<<p->name<<"  "<<p->num<<"  "<<p->sex<<endl;
 delete p;

	system("pause");
 return 0;
}