#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,a,c=1,s;
    cout<<"enter a number";
    cin>>n;
    s=n*n;
    a=n;
    while(n>0)
    {
        c=c*10;
        n=n/10;
    }
    if(s%c==n)
    cout<<"automorphic number";
else
cout<<"not automorphic number";
getch();
}