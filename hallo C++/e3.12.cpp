#include "stdafx.h"

#include <iostream>
using namespace std;
class Student312
{
private:
    int num;
    int age;
    float score;
    static float sum;
    static int count;
public:
    Student312(int, int, int);
    void total();
    static float average();
};
Student312::Student312(int m, int a, int s)
{
	num = m;
	age = a;
	score = s;
}

void Student312::total()
{
	sum += score;
	count++;
}

float  Student312::average()
{
	
	return(sum / count);
}

float  Student312::sum = 0;
int  Student312::count = 0;

int main312()
{

	Student312 stud[3] = {
		Student312(1001,18,70),
		Student312(1002,19,79),
		Student312(1005,20,98) };
	int n;
	cout << "请输入学生的人数：";
	cin >> n;
	for (int i = 0; i < n; i++)
		stud[i].total();
	cout << n << "个学生的平均成绩是" << Student312::average() << endl;
	return 0;

}
