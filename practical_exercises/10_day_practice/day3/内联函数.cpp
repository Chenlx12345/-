#include<iostream>
using namespace std;
//函数声明
inline double CalArea(double radius);
int main(int argc, char const *argv[])
{
    double r(3.0);
    double area;
    area = CalArea(r);  // 将CalArea 调用处 替换为  3.14*radius*radius;
    cout<<area<<endl;
    system("pause");
    return 0;
}
//加关键字inline      类似宏定义  将CalArea 调用处 替换为  3.14*radius*radius;
inline double CalArea(double radius)
{
    return 3.14*radius*radius;
}