#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,l,p=0,j=0;
    char st[50];
    cout<<"enter a string";
    cin>>st;
    l=strlen(st);
    for(i=l-1;i>=0;i--)
    {
        if(st[i]==st[j])
        j=j+1;
    else
    p=1;
    }
    if(p==1)
    cout<<"not pallamdrom";
else
cout<<"pallamdrom";
getch();
}