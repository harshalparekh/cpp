#include<iostream.h>
#include<conio.h>
int main ()
{
  clrscr ();
  float a,b,c,total,average,grade;
  cout<<"Enter Marks (quiz, mid-term, and final scores) :\n ";
  cin>>a;
  cin>>b;
  cin>>c;

  total=(a+b+c);
  average= (total/300)*100;
  
  cout<<"\nQuiz marks = "<<a;
  cout<<"\nMid-term marks = "<<b;
  cout<<"\nFinal marks = "<<c;
  cout<<"\n\nTotal = "<<total;
  cout<<"\nAverage = "<<average;
  
  if(average>90)
  {
      cout<<"\nGrade:A";
  }
  else if(average>=70 && average<90)
  {
      cout<<"\nGrade:B";
  }
  else if(average>=50 && average<70)
  {
      cout<<"\nGrade:C";
  }
  else if(average<50)
  {
      cout<<"\nGrade:F";
  }

  return 0;
  getch();
}
