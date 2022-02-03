#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
    float s,area;
    public:
    void square()
    {
      cout<<"Enter sides of square: ";
      cin>>s;
      area=s*s;
      cout<<"Area of square: "<<area;
        
      
    }
};
void main()
{
    clrscr();
    A obj;
    obj.square();
    getch();
};