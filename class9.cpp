
#include<iostream>
using namespace std;



/*

SMA: static Memory Alloction
    int x;
    float y;
    Complex c1;
    int *p;
    Complex *ptr;

DMA: Dynamic Memory Allocation
    malloc()   C/C++
    calloc()   C/C++
    free()   C/C++
    realloc()   C/C++

    new    C++
    delete   C++


    new is a keyword and also a operator
    delete is a keyeword and also an operator

    int *p=(int*)malloc(4);  C/C++
    int *p= new int ;   C++


    int *q=(int*)calloc(5,4);    C/C++
    int *q= new int[5]     C++


    free(p);
    delete p;

    free(q);
    delete[]q;


*/

/*

// Object pointer

class Complex{
    public:
    int a;
    int b;

    void setData(){
        cin>>a>>b;
    }
    void showData(){
        cout<<"a= "<<a<<" b= "<<b;
    }
};



int main(){
    Complex *p = nullptr;
    Complex c1;
    p= &c1;

    p->setData();
    p->showData();
    return 0;
}
*/


// this
/*
   1) this is a keyword
    2) this di a local object pointer in every instance
    member function, which contains an address of current object
    3) this cannot be modified

*/

class Complex{
    private:
    int a,b;
    public:
        Complex(int a, int b){
            this->a = a;
            this->b = b;
        }
        void setData(int a,int b){
            this->a = a;
            this->b = b;
        }
};

int main(){
    Complex c1(5,7);
    c1.setData(2,4);
}