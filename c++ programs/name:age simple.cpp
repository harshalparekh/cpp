#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    char name[30];
    int age;
    
    cout<<"Enter Person Name: ";
    cin>>name;
    cout<<"Enter Person Age: ";
    cin>>age;
    
    cout<<"\nPerson Name: "<<name;
    cout<<"\nPerson Age: "<<age;
    
    getch();
    return 0;
}