#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],i,j,p=0,l,t;
    cout<<"enter 10 number";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<9;i++)
    {
        p=1;
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[8])
            p=j;
        }
        t=a[8];
        a[p]=a[i];
        a[i]=t;
    }
    cout<<"after sorting"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<a[i]<<endl;
    }
    getch();
}