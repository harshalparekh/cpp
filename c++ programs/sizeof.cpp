#include<stdio.h>
union stu
{
  char name;
  int roll;
  double marks;
};                
int main ()      
{			
  union stu u;
  printf("%d", sizeof(u));
}
