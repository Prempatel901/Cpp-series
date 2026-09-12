#include<iostream>
using namespace std;
#define ARRAY_OVERFLOW

class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        Array(int);
        bool isEmpty();
        bool isFull();
        void append(int);
};

Array::Array(int cap)
{
    if(capacity<=0)
        capacity = 10;
    capacity=cap;
    lastIndex =-1;
    ptr= new int[cap];
}

bool Array::isEmpty(){
    return lastIndex==-1;
}

bool Array::isFull(){
    return capacity==lastIndex+1;
}

void Array::append(int data){
    if(isFull)
        throw ARRAY_OVERFLOW;
    ptr[lastIndex+1]=data;
    lastIndex++;
}