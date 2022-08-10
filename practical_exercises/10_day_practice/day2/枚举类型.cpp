#include<iostream>
using namespace std;

enum weekday
{
    s,
    m,
    t,
    w,
    thu,
    f,
    s1
};
// s=0 m=1 t=2 w=3 thu=4 f=5 s1=6 
int main(int argc, char const *argv[])
{
    enum weekday wek=s;    //s赋值给枚举wek wek = 0；
    // weekday wek=s;
    for(int i=wek;i!=f;i++)
    {
        cout<<i<<endl;
        cout<<wek+s<<endl;
        cout<<"-------哈哈-------"<<endl;
    }
    system("pause");
    return 0;
}
