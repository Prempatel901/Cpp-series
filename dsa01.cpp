#include<iostream>
using namespace std;
#define ARRAY_OVERFLOW 1
#define INVALID_INDEX 2


class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        DynArray(int);
        DynArray(DynArray&);
        DynArray operator=(DynArray&);
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        int find(int);
        ~DynArray();

        
};

DynArray::DynArray(int cap)
{
    if(capacity<=0)
        capacity = 10;
    capacity=cap;
    lastIndex =-1;
    ptr= new int[cap];
}

DynArray::DynArray(DynArray& arr){
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=arr.ptr[i];
}

DynArray DynArray::operator=(DynArray &arr){
    delete []ptr;
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=arr.ptr[i];
    return *this;
}

bool DynArray::isEmpty(){
    return lastIndex==-1;
}

bool DynArray::isFull(){
    return capacity==lastIndex+1;
}

void DynArray::append(int data){
    if(isFull)
        throw ARRAY_OVERFLOW;
    ptr[lastIndex+1]=data;
    lastIndex++;
}

void DynArray::insert(int index,int data){
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


void DynArray::edit(int index,int data){
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    ptr[index]=data;
}

void DynArray::del(int index){
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    int i;
    for(i=index;i<lastIndex;i++){
        ptr[i]=ptr[i+i];
    }
    lastIndex--;
}

int DynArray::get(int index){
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}

int DynArray::count(){
    return lastIndex+1;
}

DynArray::~DynArray(){
    delete []ptr;

}

int DynArray::find(int data){
    for(int i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}