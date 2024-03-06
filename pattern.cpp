#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,l;
    char st[50];
    cout<<"enter a string";
    cin>>st;
    l=strlen(st);
    for(i=0;i<l;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<st[j];
        }
        cout<<endl;
    }
    getch();
}