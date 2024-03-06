#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],i,s,n,p=0;
    cout<<"enter a number";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"enter search element";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        p=1;
    }
    if(p==1)
    cout<<"present";
else
cout<<"not present";
getch();
}