#include<iostream.h>
#include<conio.h>
class A
{
    float r,area;
    public:
    void circle()
    {
        cout<<"Enter radius of circle ";
        cin>>r;
        area=3.14*r*r;
        cout<<"Area of circle: "<<area;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.circle();
    getch();
};