#include<iostream>
#include<string.h>
using namespace std;


class A{
    private:
        int a,b;
    public:
        void setData(int a,int b){this->a=a;this->b=b;}
        void showData(){
            cout<<endl;
            cout<<"\na:-"<<a<<" b:-"<<b;
        }
        void input(){
            cout<<"Enter two number";
            cin>>a>>b;
        }

};

class B:public A{
    private:
        int c;
    public:
        void input(){
            int x,y;
            cout<<"Enter Three Number";
            cin>>x>>y>>c;
            setData(x,y);
        }
        void showData(){
            A::showData();
            cout<<" C="<<c;
        }

};


class Shape{
    private:
        char shapeName[30];
    public:
        void setShapeName(char n[])
        {
            strcpy(shapeName,n);
        }
        char* getShapeName(){
            return shapeName;
        }
        virtual int area() =0;

};

class Rectangle:public Shape{
    private:
        int l,b;
    public:
        void setLength(int l ){this->l=l;}
        void setBreadth(int b){this->b=b;}
        int getLength(){return l;}
        int getBreadth(){return b;}
        int area(){
            return l* b;
        }
    
};

class Square:public Shape{
    private:
        int side;
    public:
        void setSide(int s){side=s;}
        int getSide(){return side;}
        int area(){
            return side*side;
        }
};


int main(){
    Rectangle *r1=new Rectangle();
    Square *s1= new Square();
    char n1[]="Rectangle",n2[]="Square";
    s1-> setShapeName(n2);
    r1-> setShapeName(n1);
    r1-> setLength(20);
    r1-> setBreadth(8);
    cout<<"Area of rectangle is "<<r1->area();
    s1->setSide(10);
    cout<<"\nArea of Square is "<<s1->area();
    cout<<endl;
    return 0;

}