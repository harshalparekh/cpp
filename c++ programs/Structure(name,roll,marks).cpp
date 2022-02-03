#include<stdio.h>
struct stu
{
  char name[20];
  int roll;
  double marks;
};                // % = scanf,printf  
int main ()       // & = only in scanf 
{			
                  //what if we want to add, "enter name, enter roll no, etc.)            
  struct stu s;	  // what to do if want output in capital?? (UPR STRING)

  printf ("Enter student name: ");
  scanf ("%s", &s.name);

  printf ("Enter student Roll No.: ");
  scanf ("%d", &s.roll);

  printf ("Enter student marks: ");
  scanf ("%lf", &s.marks);

  printf ("Name:%s\n ", s.name);
  printf ("Roll No.:%d\n ", s.roll);
  printf ("Marks:%lf\n ", s.marks);
  return 0;
}
