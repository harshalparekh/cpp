#include<iostream.h>
#include<conio.h>
class bankaccount
{
private:
double accno;
char *name;
char *acc;
int inputamt,b;
float balance;
public:
void input()
{
cout<<"Enter your account number:";
cin>>accno;
cout<<"Enter your good name:";
cin>>name;
cout<<"Enter type of name:";
cin>>acc;
cout<<"Enter the balance amount in the account:";
cin>>balance;
}
void display()
{
cout<<accno<<endl;
cout<<name<<endl;
cout<<acc<<endl;
cout<<balance<<endl;
}
void withdraw()
{
cout<<"Enter the amount to be withdrawn";
cin>>inputamt;
if(inputamt>balance)
{
cout<<"Sorry insufficent balance";
}
else
{
cout<<"Your remaining balance is:"<<b;
}
}
void deposit1()
{
b=balance-inputamt;
}
};
void main()
{
clrscr();
bankaccount a;
a.input();
a.display();
a.withdraw();
a.deposit1();
getch();
}
