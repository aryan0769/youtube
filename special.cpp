#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,d,s=0,f=1,i,a;
    cout<<"enter a number";
    cin>>n;
    a=n;
    while(n>0)
    {
        d=n%10;
        for(i=1;i<=d;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
        f=1;
    }
    if(s==a)
    cout<<"special number";
else
cout<<"not special number";
getch();
}