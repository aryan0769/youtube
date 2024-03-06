#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,d,c=0;
    cout<<"enter a number";
    cin>>n;
    while(n>0)
    {
        d=n%10;
        if(d==0)
        c=c+1;
    n=n/10;
    }
    if(c>=1)
    cout<<"duck number";
else
cout<<"not duck";
getch();
}