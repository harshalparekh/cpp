#include<stdio.h>

int main ()
{
  int num;
  FILE *fp;

  fp = fopen ("desktop\\harsh.c", "w");
  if (fp == NULL)
    {
      printf ("File not created");
      exit (1);
    }
  printf ("File creaed sucessfully..!\n");

  printf ("Enter a Number:\n");
  scanf ("%d", &num);
  printf ("Data wrote in the file");
  printf ("%d", num);
  fclose (fp);
  return 0;
}
