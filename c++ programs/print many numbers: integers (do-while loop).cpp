#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void
main ()
{
  int i = 1;
  clrscr ();
  do
    {
      printf ("%d ", i);	//if want space between numbers, extend inverted commas(R)****
      ++i;
    }
          while (i<=10);
  getch ();
  }
