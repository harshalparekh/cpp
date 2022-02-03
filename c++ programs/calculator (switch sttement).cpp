#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main ()
{
  int a, b, c;
  int ch;
  clrscr ();
  printf ("Enter two numbers:\n");
  scanf ("%d %d", &a, &b);

  printf ("enter choice:");
  scanf ("%d", &ch);

  switch (ch)
    {
    case 1:
      c = a + b;
      printf ("%d", c);
      break;
    case 2:               //why not ("&"c) and just (c)????????
      c = a - b;
      printf ("%d", c);
      break;
    case 3:
      c = a * b;
      printf ("%d", c);
      break;
    case 4:
      c = a / b;
      printf ("%d", c);
      break;
    case 5:
      c= a % b;
      printf ("%d",c);
      break;
      default : printf("Invalid choice.\n choose 1 for addition,\n 2 for subtraction,\n 3 for multiplay, 4 for devision and 5 for mod. ");
    }
  getch ();
}
