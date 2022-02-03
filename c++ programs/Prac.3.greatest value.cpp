#include<iostream.h>
#include<conio.h>
int main ()
{
  clrscr ();
  long float a, b, c;
  cout<<"Enter three numbers: ";
  cin>>a;
  cin>>b;
  cin>>c;
  
  if(a>b)
  {
      if(a>c)
      {
       cout<< "Greatest value: "<<a;
      }
      else
      {
      cout<< "Greatest value: "<<c;
      }
  }
  else
  {
      if(b>c)
      {
        cout<<"Greatest value: "<< b; 
      }
      else
      {
       cout<< "Greatest value: "<<c;
      }
  }
  return 0;
  getch();
}
