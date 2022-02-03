#include<conio.h>
#include<stdio.h>
void main ()
{
  int password;
  clrscr ();
  printf ("Enter Password\n");
  scanf ("%d", &password);

  if (password == 2048)
    {
      printf ("Welcome");
    }
    else 
    {
        printf("Invalid password. try again");
    }
  getch ();
}
