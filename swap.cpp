#include<iostream>
using namespace ::std;


// int main(){
//     int a;
//     int b;
//     int c;
//     cout<<"Enter a first number which you want to swap : ";
//     cin>>a;
//     cout<<"Ener second number which you want to swap : ";
//     cin>>b;
//     cout<<"a = "<<a<<"\nb = "<<b;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"\na = "<<a<<"\nb = "<<b;
// }

// -------------------------------second method--------------


int main(){
 
    int a ;
    int b ;
    cout<<"Enter a first number which you want to swap : ";
    cin>>a;
    cout<<"Enter second number which you want to swap :";
    cin>>b;
    cout<<"a = "<<a<<"  b = "<<b;
    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"\na = "<<a<<"  b = "<<b;


}