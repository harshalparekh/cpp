#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main ()
{
  clrscr ();
  int a=1;
label:
  printf ("%d\t", a);
  a++;
  if (a <= 15)
    goto label;

  return 0;
}
