#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class A
{
    long int n,c,r,s;
    public:
    void input()
    {
        cout<<"Enter any number:\n ";
        cin>>n;
    }
    void output()
    {
        c=n;
        s=0;
        while(n>0)
        {
            r=n%10;
            s=(s*10)+r;
            n=n/10;
        }
        if(c==s)
        cout<<"Palindrome number";
        else
        cout<<"Not palindrome number";
    }
};
void main()
{
    clrscr();
    A obj;
    obj.input();
    obj.output();
    getch();
}