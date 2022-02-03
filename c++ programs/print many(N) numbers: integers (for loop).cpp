#include<conio.h>
#include<stdio.h>
void
main ()
{
  long int i,n;
  printf("Enter any number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
    {
      printf ("%d ", i);
    }
  getch ();
}
