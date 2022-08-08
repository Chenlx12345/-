#include<iostream>
using namespace std;
//相同的内存地址
union myun   //只分配一份其中最大成员的空间 u
{
    struct { int x; int y; int z; }u; 
    int k; 
}a; 

int main() 
{ 
    a.u.x =4;
    a.u.y =5; 
    a.u.z =6; 
    a.k = 0; //空间只有u大小  覆盖掉第一个int空间值 
    
    printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
    system("pause");
    return 0;
}