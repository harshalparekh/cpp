#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], str2[40];
    puts("Enter any string: ");
    gets(str);
    puts("Enter any string2: ");
    gets(str2);
    
    strcat(str,str2);
    puts(str);
    return 0;
}