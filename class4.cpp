
#include <iostream>
#include<iomanip>
using namespace std;

/*
  1)  Define a C++ function to  print all prime numbers between two
    given numbers
*/

// void prime(int a,int b){
//     for(int i = a; i<=b;i++){
//         if(i<2)
//             continue;
//         int isPrime = 1;
//         for(int j = 2; j<i;j++)
//         {
//            if(i%j ==0){
//             isPrime = 0;
//             break;
//            }
//         }
//         if(isPrime)
//             cout<<i<<" \n";
// }
// }

// int main(){
//     prime(2,20);
// }



/*
  2)  Definde a C++ function to find the highest value digit in
    a given number



void highestNum(int n)
{
    int max = n%10;
    n/=10;
    while(n){
        if(max<n%10)
            max = n%10;
        n/=10;
    }
    cout<<max;
}


int main(){
    highestNum(28793);
    return 0;
}

*/



/*
 3) Define a C++ function to calculate x raised to the power y.


int power(int x, int y){

    if(y==0)
        return 1;
    return x*power(x,y-1);

}


int main(){
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    int t = power(a,b);
    cout<<"power: "<<t;

    return 0;
}

*/



/*
    4) Define a C++ function to print Pascal Triangle up to N lines



int fact(int n){
    int f=1;
    while(n){
        f = f*n;
        n--;
    }
    return f;
}

int combi(int n, int r)
{
    return fact(n)/fact(n-r)/fact(r);
}


void printTringle(int line)
{
    int i,j,flag,r;
    for(i=1;i<=line;i++)
    {
        flag = 1;
        r = 0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i&&j<=line-1+i)
            {
                if(flag)
                    cout<<combi(i-1,r++);
                    // cout << setw(4) << combi(i-1,r++);
                else
                    cout<<" ";
                flag = !flag;
            }
                
            else
                cout<<" ";
        }
        cout<<"\n";
    }
}



int main(){
    printTringle(6);
    return 0;
}

*/


/*
    5) Define a C++ function to check whether a given number is a term in a 
        fibonacci series or not.

    int isFib(int n){
    int a=-1,b=1,c=0,i;
    for(i=0;c<=n;i++){
        c=a+b;
        if(n==c)
            return 1;
        a=b;
        b=c;
    }
    return 0;
}

int main(){

    int x = 25;
    if(isFib(x))
        cout<<x<<" Yes is in";
    else
        cout<<x<<" No is in";
    return 0;
}


*/

