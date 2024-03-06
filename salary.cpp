#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float s,b,ts;
    char gd;
    cout<<"enter a salary";
    cin>>s;
    cout<<"enter a grade";
    cin>>gd;
    if(gd=='a')
    b=s*20/100;
 else if(gd=='b')
 b=s*15/100;
 else if(gd=='c')
 b=s*10/100;
 else if(gd=='d')
 b=s*5/100;
 ts=s+b;
 cout<<"bonus"<<b;
 cout<<"total salary"<<ts;
 getch();
}