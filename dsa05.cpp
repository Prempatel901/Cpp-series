#include<iostream>
using namespace std;
struct node{
    node *prev;
    int item;
    node *next;
};

class DLL{
    private:
        node *start;
    public:
        DLL();
        void insertAtStart(int);
        void insertAtLast(int); 
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~DLL();

};

DLL:: DLL(){
    start=nullptr;
}

void DLL::insertAtStart(int data){
    node *n=new node;
    n->item=data;
    n->prev=nullptr;
    n->next=start;
    if(start!=nullptr)
        start->prev=n;
    start=n;
}

void DLL::insertAtLast(int data){
    node *n=new node;
    node *t;
    n->item=data;
    n->next=nullptr;
    if(start==nullptr){
        n->prev=start;
        start=n;
    }else{
        t=start;
        while(t->next!=nullptr){
            t=t->next;
        }
        n->prev=t;
        n->next=n;
    }
}

node* DLL::search(int data){
    node *t;
    t=start;
    while(t!=nullptr){
        if(t->item=data)
            return t;
        t=t->next;
    }
    return nullptr;
}

void DLL::insertAfter(node *temp,int data){
    node *n;
    if(temp!=nullptr){
        n=new node;
        n->item=data;
        n->prev=temp;
        n->next=temp->next;
        if(temp->next!=nullptr){
            temp->next->prev=n;
        }
        temp->next=n;
    }
}

void DLL::deleteFirst(){
    node *t;
    if(start!=nullptr){
        if(start->next==nullptr)
        {
            delete start;
            start = nullptr;
        }
        else{
            t= start;
            t->next->prev=nullptr;
            start=t->next;
            delete t;
        }
    }
}

void DLL::deleteLast(){
    node *t;
     if(start!=nullptr){
         if(start->next==nullptr)
        {
            delete start;
            start = nullptr;
        }else{
            t=start;
            while(t->next->next!=nullptr){
                t=t->next;
            }
            delete t->next;
            t->next=nullptr;
        }
     }
}

void DLL::deleteNode(int data){
    node *temp = search(data);
    if(temp!=nullptr){
        if(temp==start)
            deleteFirst();
        else if(temp->next==nullptr)
            deleteLast();
        else{
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            delete temp;
        }
    }
}
DLL::~DLL(){
    while(start!=nullptr)
        deleteFirst();

}