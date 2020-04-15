#include "stdafx.h"

#include <iostream>
using namespace std;
template<class numtype>
class Compare
{
private:
	numtype x, y;
public:
	Compare(numtype a, numtype b)
	{
		x = a; y = b;
	}
	numtype max()
	{
		return (x > y) ? x : y;
	}
	numtype min()
	{
		return (x < y) ? x : y;
	}
};


int main316()
{

	Compare<int> cmp1(3, 7);
	cout << cmp1.max() << "���� �������еĴ���." << endl;
	cout << cmp1.min() << "�����������е�С��." << endl;
	Compare<float> cmp2(45.78, 93.6);
	cout << cmp2.max() << "�������������еĴ���." << endl;
	cout << cmp2.min() << "�������������е�С��." << endl;
	Compare<char> cmp3('a', 'A');
	cout << cmp3.max() << "�������ַ��еĴ���." << endl;
	cout << cmp3.min() << "�������ַ��е�С��." << endl;
	return 0;

}
