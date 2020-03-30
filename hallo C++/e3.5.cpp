#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;
class Student35
{
public:
	Student35(int n, string nam, char s)
	{
		num = n;
		name = nam;
		sex = s;
		cout << num<<": Constructor called." << endl;
	}
	~Student35()
	{
		cout <<num<< ": Destructor called." << endl;
	}
	void display35()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl << endl;
	}
private:
	int num;
	string name;
	char sex;
};
int main35()
{
	Student35 stud1(10010, "Wang_li", 'f');
	stud1.display35();
	Student35 stud2(10011, "Zhang_fun", 'm');
	stud2.display35();
	return 0;
}