#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main ()
{
  int a=1000, b=2000, c=2300;  //(">" for bigger value) and ("<" for smaller)
  clrscr ();
  if(a>b)
  {
      if(a>c)
      {
        printf("%d", a);  //**why not ("&"a) and just (a) here?***
      }
      else
      {
        printf("%d", c); 
      }
  }
  else
  {
      if(b>c)
      {
        printf("%d", b);  
      }
      else
      {
        printf("%d", c);  
      }
  }
  getch();

}