#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int s,l,b,h,ch,c,cb;
    cout<<"1 for cube, 2 for cuboid";
    cout<<"\n enter your choice";
    cin>>ch;
    switch(ch)
    {
    case 1:
    cout<<"enter the value of side";
    cin>>s;
    c=s*s*s;
    cout<<"volume of a cube"<<c;
    break;
    case 2:
    cout<<"enter the value of l,b,h";
    cin>>l>>b>>h;
    cb=l*b*h;
    cout<<"volume of cuboid"<<cb;
    break;
    default:
    cout<<"wrong choice";
    }
    getch();
}