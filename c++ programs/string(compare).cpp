#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], str2[40];
    puts("Enter any string: ");
    gets(str);
    puts("Enter any string2: ");
    gets(str2);
    if(strcmp(str,str2)==0)
    puts("Both strings are equal");
    else
    puts("both strings are not equal");
    return 0;
}