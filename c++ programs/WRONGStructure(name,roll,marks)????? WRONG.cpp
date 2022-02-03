#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
struct stu 
{
    char name[20];
    int roll;
    double marks;         //WHATS WRONG IN THIS??????????
};
int main()
{
    struct stu s;
    
    printf("Enter Student Name:\n");
    scanf("%s ", &s.name);
    printf("Enter Student Roll No.:\n");
    scanf("%d ", &s.roll);
    printf("Enter Student Marks:\n");
    scanf("%lf ", &s.marks);
 
 printf("Name: %s\n Roll No.: %d\n Marks: %lf",s.name,s.roll,s.marks);
    return 0;
}