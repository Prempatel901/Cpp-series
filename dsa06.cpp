#include<iostream>
using namespace std;

struct node{
    int item;
    node* next;
};

class CLL{
    private:
        node *last;
    public:
        CLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CLL();
};

CLL::CLL()
{
    last=nullptr;
}

void CLL::insertAtStart(int data){
    node *n = new node;
    n->item=data;
    if(last==nullptr){
        n->next=n;
        last=n;
    }else{
        n->next=last->next;
        last->next=n;
    }
}

void CLL::insertAtLast(int data)
{
        node *n = new node;
    n->item=data;
    if(last==nullptr){
        n->next=n;
        last=n;
    }else{
        n->next=last->next;
        last->next=n;
        last=n;
    }
}

node* CLL::search(int data){
    node *t;
    if(last==nullptr)
        return nullptr;
    t=last->next;
    do{
        if(t->item==data)
            return t;
        t=t->next;
    }
    while(t!=last->next);
    return nullptr;
}

void CLL::insertAfter(node* temp,int data)
{
    node *n;
    if(temp!=nullptr){
        n=new node;
        if(temp==last)
            insertAtLast(data);
        else{
        n=new node;
        n->item=data;
        n->next=temp->next;

        temp->next=n;
        }
        
    }
}


void CLL::deleteFirst(){
    node *t;
    if(last!=nullptr)
    {
        if(last->next==last){
            delete last;
            last =nullptr;
        }else{
            t=last->next;
            last->next=t->next;
            delete t;
        }
    }
}

void CLL::deleteLast(){
    node *t;
    if(last!=nullptr)
    {
        if(last->next==last){
            delete last;
            last =nullptr;
        }else{
            t=last->next;
            while(t->next!=last)
            {
                t=t->next;
            }
            t->next=last->next;
            delete last;
            last=t;
        }
    }
}

void CLL::deleteNode(int data){
    node *temp,*t;
    temp=search(data);
    if(temp!=nullptr){
        if(last==temp)
            deleteLast();
        else{
            t=last->next;
            while(t->next!=temp)
            {
                t=t->next;
            }
            t->next=temp->next;
            delete temp;
        }
    }
}

CLL::~CLL(){
    while(last!=nullptr)
        deleteFirst();
}