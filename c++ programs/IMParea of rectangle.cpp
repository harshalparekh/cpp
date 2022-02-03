#include<iostream.h>
#include<conio.h>
class A
{
    float l,b,area;
    public:
    void rectangle()
    {
        cout<<"Enter length and breath of rectengle";
        cin>>l>>b;
        area=l*b;
        cout<<"Area of rectengle: "<<area;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.rectangle();
    getch();
};