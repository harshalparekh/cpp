#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    puts("Enter any string: ");
    gets(str);
    puts(strlwr(str));
    return 0;
}