#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
    float a,b,c,s,area;
    public:
    void triangle()
    {
        cout<<"Enter sides of triangle ";
        cin>>a>>b>>c;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle: "<<area;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.triangle();
    getch();
};