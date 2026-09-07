
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

// question 1

class Person
{
private:
    char name[20];
    int age;
protected:
    void setName(const char n[]){strcpy(name,n);}
    void setAge(int a){age=a;};
    char* getName(){return name;};
    int getAge(){return age;}
};

class Employee:public Person
{
    private:
    float salary;
    public:
        void setEmploye(const char n[],int a, float s)
        {
            setName(n);
            setAge(a);
            salary = s;
        }
        void showEmploye(){
            getName();
            getAge();
            cout<<endl;
            cout<<"name:- "<<getName()<<"\nAge:- "<<getAge()<<"\nSalary:- "<<salary;
        }
};


// question 2


class Circle 
{
    private:
     int r;
    public:
        void setRadius(int r){this->r=r;}
        int getRadius(){return r;}
        float getArea(){return 3.14*r*r;}

};

class ThickCircle:public Circle
{
    private:
    int thick;
    public:
        void setThickness(int t){thick=t;}
        int getThickness(){return thick;}
        float getArea(){
            return 3.14*(getRadius()+thick)*(getRadius()+thick)-3.14*getRadius()*getRadius();

        }
};

// question 3


class Coordinate 
{
    private:
    int x,y;
    public:
        void setCoordinate(int x, int y){this->x=x; this->y=y;}
        void showCoordinate(){
            cout<<"\nx ="<<x<<"\ny ="<<y;
        }
        double getDistance(){
            return sqrt(x*x+y*y);
        }
        double getDistance(Coordinate C){
             return sqrt((x-C.x)*(x-C.x)+(y-C.y)*(y-C.y));
        }
};


// question 4


class Shape {
    private:
        char shapeName[20];
    public:
        void setShapeName(char s[]){strcpy(shapeName,s);}
        char* getShapeName(){return shapeName;}

};


// question 5


class Straighline:public Shape
{
    private:
        Coordinate c1,c2;
    public:
        void setLine(Coordinate c1,Coordinate c2)
        {
            this->c1=c1;
            this->c2=c2;
        }
        
        double getDistance(){
            return c1.getDistance(c2);
        }
        
        void showLine(){
            c1.showCoordinate();
            c2.showCoordinate();
        }

};











// int main(){
//     Employee p1;
//     p1.setEmploye("vasu",20,38.5);
//     p1.showEmploye();
//     cout<<endl;
//     return 0;
// }


