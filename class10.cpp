#include<iostream>
#include<string.h>
using namespace std;


//7) Destructor inheritance

class A
{
    public:
        ~A(){
        cout<<"A-Dest";}
};

class B: public A
{
    public:
        ~B(){
            cout<<"B-Dest"; 
        }
};

void f1(){
    B obj;
}

int main(){
f1();
return 0;
}






/*
6) Explicitly define constructor in both the classes

*/


/*
class A{
    int a1,a2;
    public:
        // A(){a1=0;a2=0}
       // A(int a,b){a1= a; a2 = b;}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B():A()
       // {}
       // B(int x,int y):A(x,y)
       // {}
       // B(int a, int b,int c, int d): A(a,b)
       // {b1=c; b2=d;}
    
};

int main(){
    B obj1; 
    B obj2(2,3);
    B obj3(2,3,4,6);
}
*/




/*
5) we have defined parameterized consturctor in A and 
have not defined any constructor in B and call A class 
constructor explicilty

*/


/*
class A{
    int a1,a2;
    public:
    
       // A(int a, int b){a1= a; a2 = b;}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B():A(3,4)
       // {}
    
};

int main(){
    B obj; 
}
*/





/*
4) we have defined parameterized consturctor in A and 
have not defined any constructor in B but not invoked 
constructor of class A

*/


/*
class A{
    int a1,a2;
    public:
    
       // A(int a,int b){a1= a; a2 = b;}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B()   //:A()
       // {}
    
};

int main(){
    B obj; // Error
}
*/



/*
3) we have defined parameterized consturctor in A and 
have not defined any constructor in B

*/


/*
class A{
    int a1,a2;
    public:
    
       // A(int a,b){a1= a; a2 = b;}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B():A()
       // {}
    
};

int main(){
    B obj; // Error
}
*/





/*
2) we have defined non parameterized constructor in A
and have not defined any consturctor in B

*/

/*
class A{
    int a1,a2;
    public:
    
       // A(){}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B():A()
       // {}
    
};

int main(){
    B obj;
}
*/





/*
1) we have not defined constructors in A and B

*/



/*
class A{
    int a1,a2;
    public:
    
       // A(){}
    
};

class B:public A
{
    int b1,b2;
    public:
    
       // B():A()
       // {}
    
};

int main(){
    B obj;
}
*/






/*
    Define a class Employee with the help of person class

*/

// class Person
// {
//     private:
//         char name[20];
//         int age;
//     protected:
//         void setName(char n[])
//         {
//             strcpy(name,n);
//         }
//         void setAge(int a)
//         {
//             age=a;
//         }
//     public:
//         char* getName() {return name;}
//         int getAge() {return age;}
// };   

// class Employe:public Person{
//     private:
//         int empid;
//         float salary;
//     protected:
//         void setEmpid(int id){empid = id;}
//         void setSalary(float s){salary = s;}
//     public:
//         int getEmpid(){return empid;}
//         float getSalary(){return salary;}
//         void setEmploye(int id,char n[],int a, float s)
//         {
//             empid = id;
//             setName(n);
//             setAge(a);
//             salary = s;
//         }
// };

// int main(){
//     Employe e1; 
//     e1.setEmploye(9110,"vasu",21,5000);
//     int a = e1.getEmpid();
//         e1.getName();
//     int c = e1.getAge();
//     float b = e1.getSalary();
//     cout<<"id= "<<a<<" name= "<<e1.getName()<<" age = "<<c<<" salary= "<<b;
    
//     return 0;
// }