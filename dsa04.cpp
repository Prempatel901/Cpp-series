#include<iostream>
using namespace std;

struct node
{
    int item;
    node *next;
};

class SLL{
    private:
        node *start;
    public:
        SLL();
        void insertAtStart(int);
        void insertAtlas(int);
        node* search(int);
        void insertAfter(node*,int);
        void delFirst();
        void delLast();
        void delNode(node*);
        void delNode(int);
        ~SLL();

};

SLL::SLL(){
    start = nullptr;
}
void SLL::insertAtStart(int data)
{
    node *n =new node;
    n->item=data;
    n->next=start;
    start=n;
}
void SLL::insertAtlas(int data){
    node *n = new node;
    n->item=data;
    n->next=nullptr;
    node *t;
    if(start==nullptr)
        start=n;
    else{
        t=start;
        while(t->next!=nullptr)
        {
            t=t->next;

        }
        t->next=n;
    }
}

node* SLL::search(int data){
    node *t;
    t=start;
    while(t!=nullptr){
        if(t->item==data)
            return t;
        t=t->next;
    }
    return nullptr;
}

void SLL::insertAfter(node *temp,int data)
{
    if(temp!=nullptr)
    {
        // check if temp is a valid node in the list
        node *t;
        t=start;
        while(t!=nullptr){
            if(t==temp)
                break;
            t=t->next;
        }
        if(t==nullptr)
            cout<<"Specified node does not belong to the list";
        else{
            t=new node;
            t->item =data;
            t->next = temp->next;
            temp->next=t;
        }
    }
}

void SLL:: delFirst(){
    if(start!=nullptr)
    {
        node *t;
        t=start;
        start=start->next;
        delete t;
    }
}

void SLL:: delLast(){
    if(start!=nullptr){
        node *t;
        if(start->next==nullptr) //single node in the list
        {
            delete start;
            start = nullptr;
        }
        else{
            t=start;
            while(t->next->next!=nullptr){
                t-t->next;
            }
            delete t->next;
            t->next=nullptr;
        }
    }

}

void SLL::delNode(node *temp){
    if(temp!=nullptr){
        node *t=search(temp->item);
        if(t==temp)
        {
            t=start;
            if(start==temp){
                delFirst();
            }
            else{
            while(t->next!=temp){
                t=t->next;
            }
            t->next=temp->next;
            delete temp;
        }
        }
    }

}

void SLL::delNode(int data){
    node *temp = search(data);
    if(temp!=nullptr)
    {
        node *t;
        t=start;
        if(start==temp){
            delFirst();
        }else{
            while(t->next!=temp){
                t=t->next;
            }
            t->next=temp->next;
            delete temp;
        }
    }
}

SLL::~SLL(){
    while(start!=nullptr){
        delFirst();
    }
}
