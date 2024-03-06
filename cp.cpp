#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int cp, sp;
    cout<<"enter cp and sp";
    cin>>cp>>sp;
    if(sp>cp)
    cout<<"profit";
else if(cp>sp)
cout<<"less";
else
cout<<"no profit no loss";
getch();
}