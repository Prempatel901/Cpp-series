
#include <iostream>
#include<string.h>
using namespace std;

/*
    Exception Handling
    try, throw, catch
*/

// class Array
// {
// private:
//     int a[5];
//     int length;
//     int size;

// public:
//     Array()
//     {
//         size = 5;
//         length = 0;
//     }
//     void setData(int index, int data)
//     {
//         if(index<0)
//             throw 1;
//         if(index>size-1)
//             throw 2;
//         a[index] = data;
//         length++;
//     }
//     int getLength() { return length; }
//     int getSize() { return size; }
//     int getData(int index) { return a[index]; }
// };

// int main()
// {
//     Array arr;
//     try
//     {
//         arr.setData(0, 10);
//         arr.setData(1, 20);
//         arr.setData(2, 30);
//         arr.setData(-2, 40);
//         arr.setData(3,40);
        
//     }

//     catch(int c){
//         if(c==1)
//             cout<<"Negetive index is not allowed";
//         if(c==2)
//             cout<<"index out of range";
//     }

//     cout << "size = " << arr.getSize() << endl;
//         cout << "Total elements= " << arr.getLength() << endl;
//         for (int i = 0; i < arr.getLength(); i++)
//             cout << " " << arr.getData(i);
    
//     // cout<<end;
//     return 0;
// }



void f1()
{
    int age, votes;
    char nationlity[30];
    try{
        cout<<"Enter your age";
        cin>>age;
        if(age<18)
            throw 1;
        cout<<"\n Enter Your nationality";
        cin.ignore();
        cin.getline(nationlity,30);
        if(strcmp(nationlity,"INDIAN"))
            throw 4.5;
        cout<<"\n Vote for your fav actor";
        cout<<"\n1. Amir khan";
        cout<<"\n2. Ranbir Kapoor";
        cout<<"\n3. Akhay kumar";
        cout<<"\n4. Ajay devgun";
        cin>>votes;
        cout<<"\n Thank your for your vote";
    }

    catch(int e){
        cout<<"Your are not eligible to cast your vote";

    }
    catch(char* e)
    {
        cout<<"you must be Indian to cast vote";
    }
    catch(...)
    {
        cout<<"Some Exception";
    }
    cout<<"\nEnd of code";
}

int main(){
    f1();
    cout<<endl;
    return 0;
}