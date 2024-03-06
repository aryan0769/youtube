#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int ch;
    float f,c;
    cout<<"enter 1 for f to c and 2 for c to f";
cout<<"enter your choice";
cin>>ch;
switch(ch)
{
    case 1:
cout<<"enter the value of f";
cin>>f;
c=(f-32)*5/9;
cout<<"cel"<<c;
break;
case 2:
cout<<"enter the value of c";
cin>>c;
f=9*c/5+32;
cout<<"fer"<<f;
break;
default:
cout<<"wrong choice";
}
getch();    
}
