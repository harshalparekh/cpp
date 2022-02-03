#include<iostream.h>
#include<conio.h>
#include<math.h>
class A
{
    int n,a,b,c;
    public:
    void fib()
    {
        a=0; b=1;
        cout<<"Enter number of terms: ";
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<a<<ends;
            c=a+b;
            a=b;
            b=c;
        }
     
    }
};
void main()
{
    clrscr();
    A obj;
    obj.fib();
    getch();
    
}