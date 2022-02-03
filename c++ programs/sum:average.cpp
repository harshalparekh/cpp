#include<conio.h>
#include<iostream.h>
#include<stdio.h>
int main()
{
    clrscr();
    long int num1,num2,sum;
    long float average;
    cout<<"Enter any numbers:\n ";
    cin>>num1>>num2;
    sum=num1+num2;
    average=sum/2.0;
    
    cout<<"\nSum is: "<<sum;
    cout<<"\naverage of two numbers: "<<average;
    return 0;
    getch();
}