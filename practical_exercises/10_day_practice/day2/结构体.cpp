#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int num;
    char name[20];
    char gender;
};

int main(int argc, char const *argv[])
{
    student s={10,"asd",'M'};
    cout<<s.num<<endl;
    cout<<sizeof(s.num)<<endl;    
    cout<<sizeof(s.name)<<endl;   //数组的大小
    cout<<strlen(s.name)<<endl;   //长度
    cout<<sizeof(s.gender)<<endl;
    cout<<sizeof(s)<<endl;
    system("pause");
    return 0;
}

