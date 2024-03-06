#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k,a=5;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=a;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        a--;
    }
    getch();
}