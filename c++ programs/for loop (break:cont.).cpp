#include<stdio.h>
#include<conio.h>
#include<iostream.h>
int main()
{
    clrscr();
    int a;
    for(a=1; a<=20;a++)
    {
        if(a==9)
        break;   // continue for continue statement.
                 // break will break the sequence after specified value.
                 // continue will skip just the number entered.



        printf("%d",a);
    }
    printf("\nLearn Coding");
    return 0;
}