#include<conio.h>
#include<iostream.h>
class A
{
  char ch;
  public:
  void input()
  {
      cout<<"Enter any character: ";
      cin>>ch;
  }
  void show()
  {
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      cout<<"Vowel";
      else
      cout<<"not vowel";
  }
};
void main()
{
    clrscr();
    A obj;
    obj.input();
    obj.show();
    getch();
}