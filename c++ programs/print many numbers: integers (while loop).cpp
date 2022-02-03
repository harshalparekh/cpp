#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main ()
{
  int i = 1;
  clrscr ();
  while (i <= 100)
  {
  printf ("%d ", i);  //if want space between numbers, extend inverted commas(R)****
  ++i;
  }
  getch ();
}