#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
    int n,i,f;
    public:
    void factorial()
    {
        f=1;
        cout<<"Enter any number: ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            f=f*i;    
        }
        cout<<"Factorial: "<<f;
    }
};
void main()
{
    clrscr();
    A obj;
    obj.factorial();
    getch();
    
}