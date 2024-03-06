#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,d,s=0,a;
    cout<<"enter a number";
    cin>>n;
    a=n;
    while(n>0)
    {
        d=n%10;
        s=s+d*d*d;
        n=n/10;
    }
    if(s==a)
    cout<<"armstrong";
else
cout<<"not armstrong";
getch();
}