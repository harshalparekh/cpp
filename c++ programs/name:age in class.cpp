#include<iostream.h>
class person
{
    char name[30];
    int age;
    public:
    void getdata (void);
    void output (void);
};

void person :: getdata (void)
{
 cout<<"Enter Person Name: ";
 cin>>name;
 cout<<"Enter Person Age: ";
 cin>>age;
}

void person :: output (void)
{
    cout<<"\nPerson Name: "<<name;
    cout<<"\nPerson age: "<<age;
}

int main()
{
    person f;
    f.getdata();
    f.output();
    return 0;
}
 


