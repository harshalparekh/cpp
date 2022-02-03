#include<stdio.h>

int main ()
{
  int *p, **q, a = 10;
  p =&a;
  q =&p;

  printf("%d\n",a);  //10
  printf("%d\n",&a); //address a
  printf("%d\n",p);  //address a
  printf("%d\n",*p); //10
  printf("%d\n",q);  //address p
  printf("%d\n",*q); //address a
  printf("%d\n",**q); //10

 return 0;
}
