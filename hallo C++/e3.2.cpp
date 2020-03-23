#include "stdafx.h"
#include <iostream>
using namespace std;
class Box
{
public:
    Box(int , int , int);
    int volume();
private:
    int height;
    int width;
    int length;
};

Box::Box(int h, int w, int len) :height(h), width(w), length(len) {};
/*Box::Box(int h, int w, int len)   // �����幹�캯��
{
    height = h;
    width = w;
    length = len;
}*/

int Box::volume()    //  ���㳤��������
{
    return(height * width * length);
}

int main32()
{
    Box box1(15,20,47);    // �������box1
    cout << " box1���=" << box1.volume() << endl;
    Box box2(15, 30, 21);    // �������box2
    cout << " box2���= " << box2.volume() << endl;
    return 0;
}