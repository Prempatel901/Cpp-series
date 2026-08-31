
#include<iostream>
using namespace std;
#include<string.h>


class Person
{
    private:
        int age;
        char name[20];
    public:
        Person(char name[], int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
};


class Complex 
{
    private:
        int a,b;
    public:
        void setData(int a, int b)
        {
            this->a=a;
            this->b=b;
        }
        void showData(){
            cout<<"\na="<<a<<" b="<<b;
        }
};

void f1()
{
    Complex *p=new Complex();
    p-> setData(3,4);
    p-> showData();
}

int main(){
    f1();
    cout<<endl;
    return 0;
}