/*
知识点：
静态成员函数
类外代码可以使用类名和作用域操作符来调用静态成员函数。
静态成员函数只能引用属于该类的静态数据成员或静态成员函数。
*/
#include<iostream>
using namespace std;
class Application
{ 
public:
    static void f();  //相当于只声明了 需要到类外定义 否则报错
    static void g();
private:
    static int global;
};
int Application::global=0;     //定义并赋值
void Application::f()          //定义并赋值
{  global=5;}
void Application::g()
{  cout<<global<<endl;}

int main()
{
    Application::f(); //静态成员 类对象不存也可以调用
    Application::g();
    system("pause");
    return 0;
}

