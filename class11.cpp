#include<iostream>
using namespace std;

class A {
    public:
       virtual void f1(int x){
            cout<<"A-f1()";
        }
};

class B: public A
{
    public:
        void f1(int a){
            cout<<"B-f2()";
        }
};

int main(){
    A *p;
    p=new A;
    p->f1(5);
    cout<<endl;
    return 0;

}