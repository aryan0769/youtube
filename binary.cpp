#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],sn,m,f=0,l=9,p=0,i;
    cout<<"enter 10 number";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"enter a search element";
    cin>>sn;
    while(f<=l)
    {
        m=(f+l)/2;
        if(sn>a[m])
        f=m+1;
    else if(sn<a[m])
    l=m-1;
    else
    {
        p=1;
        break;
    }
    }
    if(p==1)
    cout<<"present";
else
cout<<"not present";
getch();
    }