#include<iostream.h>
using namespace std;
class complex{
    public:
    float real;
    float img;
    complex()
    {
        this->real = 0.0;
        this->img = 0.0;
    }
    complex(float real,float img){
        this->real=real;
        this->img=img;
    }
    //overloading + operator
    complex operator+(const complex &obj){
        complex temp;
        temp.img=this->img+ obj.img;
        temp.real=this->real + obj.real;
        return temp;
    }
    //overlloading - operator
    complex operator-(const complex &obj){
        complex temp;
        temp.img=this-> img-obj.img;
        temp.real=this->real-obj.real;
        return temp;
    }
     complex operator*(const complex &obj){
        complex temp;
        temp.img=this-> img*obj.img;
        temp.real=this->real*obj.real;
        return temp;
    }
     complex operator/(const complex &obj){
        complex temp;
        temp.img=this-> img-obj/img;
        temp.real=this->real-obj/real;
        return temp;
    }
    void display(){
        cout <<this->real <<"+"<<this-> img<<"i"<<endl;
    }
};
int main()
{
    complex a,b,c;
    cout<<"Enter real and complex coefficient of the first complex number: " <<endl;
    cin>>a.real;
    cin>>a.img;
    
    cout<<"Enter real and complex coefficient of the first complex number: " <<endl;
    cin>>b.real;
    cin>>b.img;
    
    cout<<"Addition Result: ";
    c=a+b;
    c.display();
    
     cout<<"Subtraction Result: ";
    c=a-b;
    c.display();
    
     cout<<"Multiplication Result: ";
    c=a*b;
    c.display();
    
     cout<<"Division Result: ";
    c=a/b;
    c.display();
    
    return 0;
}
