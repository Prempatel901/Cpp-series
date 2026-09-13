#include<iostream>
using namespace std;
#define ARRAY_OVERFLOW 1
#define INVALID_INDEX 2


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
        void insert(int,int);
        void edit(int,int);
        void del(int);
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

void Array::insert(int index,int data){
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    if(isFull())
        throw  ARRAY_OVERFLOW;
    int i;
    for(i=lastIndex;i>=index;i--)
    {
        ptr[i+1]=ptr[i];
    }
    ptr[index]=data;
    lastIndex++;
}


void Array::edit(int index,int data){
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    ptr[index]=data;
}

void Array::del(int index){
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    int i;
    for(i=index;i<lastIndex;i++){
        ptr[i]=ptr[i+i];
    }
}