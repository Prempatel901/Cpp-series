#include<iostream>
#include<math.h>
using namespace std;
void swap(int , int );
int add(int , int );
float circle(int );
int rectangle(int , int  );
int triangle(int , int );
int max(int ,int );
int add(int ,int );
int add(int ,int,int );




int main(){
    cout<<max(9,8);
    return 0;
}

/*
    1) Define a C++ function to swap data of two int variables 
    using call by reference.
*/


void swap(int a, int b)
{
    cout<<"a= "<<a<<" b= "<<b;
    int c;
    c =a;
    a=b;
    b=c;
    cout<<"\na= "<<a<<" b= "<<b;
}



/*
    2) Define a C++ function using the default argument 
    that is able to add 2 or 3 numbers.
*/

int add(int a, int b){
    return a+b;
}



/*
   3) Define  overloaded function to calculate area of circle, area of
    rectangle and area of triangle
*/

float circle(int r)
{
    return 3.14*r*r;
}

int rectangle(int l, int w ){
    return l*w;
}

int triangle(int a, int b, int c)
{
    float s,ar;
    s = (a+b+c)/2.0;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}




/*
   4) write functions using functon overloading to find a maximum
   of two number and both the numbercan be integer or real.
*/

int max(int a,int b){
    return a>b?a:b;
}

double max(double a,double b){
    return a>b?a:b;
}



/*
   5) write functions using function overloading to add two numbers 
   having different data types.
*/

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}