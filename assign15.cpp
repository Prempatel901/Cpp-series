#include<iostream>
using namespace std;
#include<string.h>

// 1 

class Complex {
    private:
        int a,b;
    public:
        void setData(int x,int y){a=x; b=y;}
        void showData(){cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator-(Complex);
};

Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}

//   2

class Integer
{
    private:
        int a;
    public:
        friend bool operator!(Integer);
        friend bool operator==(Integer,Integer);
};

bool operator!(Integer I)
{
    return !(I.a);
}

bool operator==(Integer I1,Integer I2)
{
    return I1.a == I2.a;
}


//3

class Coordinate
{
    private:
        int x,y;
    public:
        Coordinate():x(0),y(0){}
        Coordinate(int x, int y):x(x),y(y){}
        Coordinate operator,(Coordinate C)
        {
            return C;
        }
        void show(){cout<<"\n("<<x<<","<<y<<")";}
        friend ostream& operator<<(ostream&,Coordinate);
        friend istream& operator>>(istream&,Coordinate&);
};

ostream& operator<<(ostream &dout,Coordinate C)
{
    cout<<"\n("<<C.x<<","<<C.y<<")";
    return dout;
}

istream& operator>>(istream &din,Coordinate &C)

{
    din>>C.x>>C.y;
    return din;

}


// 4

class Student
{

    private:
        int rolno;
        char name[20];
        int age;
    public:
        void setStudent(int r,char n[],int a)
        {
            rolno=r;
            strcpy(name,n);
            age=a;
        }
        void showStudent(){
            cout<<"\n"<<rolno<<" "<<name<<" "<<age;
        }

        bool operator==(Student S)
        {
            return rolno==S.rolno && age==S.age && !(strcmp(name,S.name));
        }

};


// int main(){
//     Coordinate c1(2,3),c2(5,-1),c3;
//     c3=(c1,c2);
//     c3.show();
//     cout<<endl;
//     return 0;
// }