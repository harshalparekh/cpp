#include<stdio.h>
int main ()
{
    int y;
    printf("Enter Year: ");
    scanf("%d", &y);
    
    if(y%400==0 || y%4==0 && y%100!=0)
    {
        printf("Year is leap year");
    }
    else
    {
    printf("Year is not leap year");

    }
    return 0;
}