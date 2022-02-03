#include<stdio.h>
struct stu 
{
    char name[20];
    int roll;
    double marks;
};
int main()
{                      //what if we want to add, "enter name, enter roll no, etc.)            
    struct stu s;      // what to do if want output in capital?? (UPR STRING)
    
    printf("Enter Student Record: \n");
    scanf("%s%d%lf",&s.name,&s.roll,&s.marks);
 
    printf("%s %d %lf",s.name,s.roll,s.marks);

    return 0;
}