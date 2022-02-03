#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main ()
{
 float rupees, dollar;
 clrscr();
 printf("Enter amount in rupees: ");
 scanf("%f", &rupees);
 
 dollar=rupees/75;
 printf("\n Dollar= %f", dollar);
return 0;

}