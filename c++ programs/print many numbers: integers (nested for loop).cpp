#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main ()
{
  int i, j;
  clrscr ();
  for (i = 1; i <= 20; i++)
    {
      for (j = 1; j <= i; j++)
	{
	  printf ("01 ");
	}
      printf ("\n");
    }
  getch ();
}
