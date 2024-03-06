#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int m[2][2],i,j,t[2][2];
    cout<<"enter 2*2 matrix";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>m[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            t[i][j]=m[i][j];
            cout<<t[i][j]<<"";
        }
        cout<<endl;
    }
    getch();
}