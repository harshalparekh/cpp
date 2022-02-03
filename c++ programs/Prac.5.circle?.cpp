#include<iostream.h>
#include<conio.h>
class A
{
    float r,area,circ;
    public:
    void circle()
    {
        cout<<"Enter radius of circle ";
        cin>>r;
        area=3.14*r*r;
        circ=2*(3.14*r);
        
        cout<<"\nRadius of circle: "<<r;
        cout<<"\nArea of circle: "<<area;
        cout<<"\nCircumference of circle: "<<circ;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.circle();
    getch();
};