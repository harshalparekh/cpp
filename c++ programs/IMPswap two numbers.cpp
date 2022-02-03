#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class swap
{
    long int n1,n2,temp;
    public:
    void take()
    {
        cout<<"Enter two numbers:\n ";
        cin>>n1>>n2;
    }
    void get()
    {
        temp=n1;
        n1=n2;
        n2=temp;
        cout<<n1<<" "<<n2;
    }
};
void main()
{
    clrscr();
    swap obj;
    obj.take();
    obj.get();
    getch();
}