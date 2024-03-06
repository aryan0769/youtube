#include<iostream>
#include<conio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{
    int i,l;
    char st[50];
    cout<<"enter a string";
    cin>>st;
    l=strlen(st);
    for(i=0;i<l;i++)
    {
        if(islower(st[i]))
        cout<<toupper(st[i]);
    else if(isupper(st[i]))
    cout<<tolower(st[i]);
    }
    getch();

}