#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main ()
{
  int marks;
  clrscr ();
  printf ("enter marks..!\n");
  scanf ("%d", &marks);
  if (marks == 100)
    {
      printf ("WOW- GENIUS");
    }
  else if (marks >= 80 && marks < 100)
    {
      printf ("FIRST CLASS");
    }
  else if (marks >= 65 && marks <= 79)
    {
      printf ("GOOD");
    }
  else
    {
      printf ("POOR. STUDY WELL NEXT TIME");
    }
    getch();
}
