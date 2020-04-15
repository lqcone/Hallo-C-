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
	cout << cmp1.max() << "是两 个整数中的大数." << endl;
	cout << cmp1.min() << "是两个整数中的小数." << endl;
	Compare<float> cmp2(45.78, 93.6);
	cout << cmp2.max() << "是两个浮点数中的大数." << endl;
	cout << cmp2.min() << "是两个浮点数中的小数." << endl;
	Compare<char> cmp3('a', 'A');
	cout << cmp3.max() << "是两个字符中的大者." << endl;
	cout << cmp3.min() << "是两个字符中的小者." << endl;
	return 0;

}
