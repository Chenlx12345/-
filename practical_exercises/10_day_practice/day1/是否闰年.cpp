#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int year;
    bool isLeapYear;
    cout<<"Enter the year: ";
    cin>>year;

/*   1、普通闰年：公历年份是4的倍数的，一般是闰年。（如2004年就是闰年）；
     2、世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是世纪闰年，2000年是世纪闰年）。*/
    isLeapYear = (((year%4==0)&&(year%100!=0))||(year%400==0));  
    if(isLeapYear)
    {
        cout<<year<<" is a leap year"<<endl;   //润年 
    }
    else
    {
        cout<<year<<" is not a leap year"<<endl;  //不润年
    }
    system("pause");
    return 0;
}
