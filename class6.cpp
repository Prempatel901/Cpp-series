#include <iostream>
#include<string.h>
using namespace std;
void sort(int A[], int size, bool asc);
void sortStr(char *A[],int size,bool asr);
void rotate(int A[],int ,int ,int );
int lcm(int ,int ,int );
void printPrimeFactor(int );
int nextPrime(int);
int isPrime(int);


int main(){
    printPrimeFactor(12);
    return 0;

}

/*
  1) Define a C++ functon to sort an array of integers in ascending
   or descendig order depending on bool type argument (true for ascendig
   and false for descending ).use default argument to implement it.
*/

void sort(int A[], int size, bool asc)
{
    int i, r, t=0;
    for (r = 0; r < size; r++)
    {
        for (i = 0; i < size - 1 - r; i++)
        {
           if (asc==true&& A[i] > A[i + 1])
                {
                    t = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = t;
                }
            else if(asc==false&&A[i]<A[i+1])
            {
                    t = A[i];
                    A[i] = A[i + 1];
                    A[i + 1] = t;
            }
        }
    }
    for(int i=0;i< size;i++)
        {
            cout<<A[i]<<" ";
        }
}




/*
  2) Define a C++ functon to sort an array of string in ascending
   or descendig order depending on bool type argument (true for ascendig
   and false for descending ).use default argument to implement it.
*/


// int main(){
//     char *b[] = {"ram","aman","zoya","deep","raj","vikas"};
//     sortStr(b,6,true);
//     return 0;
// }


void sortStr(char *A[],int size,bool asr)
{
    int i,r;
    char *temp;
    for(r = 0;r<size;r++)
    {
        for(i=0;i<size-1-r;i++)
        {
            if(asr==true&&strcmp(A[i],A[i+1])>0)
            {
                // strcpy(temp,A[i]);
                // strcpy(A[i],A[i+1]);
                // strcpy(A[i+1],temp);
                 temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
            else if(asr==false&&strcmp(A[i],A[i+1])<0)
            {
                 strcpy(temp,A[i]);
                strcpy(A[i],A[i+1]);
                strcpy(A[i+1],temp);
            }
        }
    }
    for(int i=0;i<size;i++)
        cout<<A[i]<<" ";
}



/*
  3) Define a C++ functon to rotate an array by n position in the d direction 
     implement position and direction using default arguments Argument d can be 
     -1 or 1 denoting left or right direction Argument n should be the last
     argument with default value.
*/


void rotate(int A[],int size,int d,int n)
{
    int i,t,j;
    if(d==1)
    {
        for(j=1;j<=n;j++)
        {
            t=A[size-1];
            for(i=size-1;i>0;i--)
                A[i]=A[i-1];
            A[0]=t;
        }
    }if(d==-1){
        for(j=1;j<=n;j++)
        {
            t=A[0];
            for(i=1;i<size;i++)
                A[i-1]=A[i];
            A[size-1]=t;
        }
    }

    for(int i=0;i<size;i++)
            cout<<A[i]<<" ";
    
}


/*
  4) Define a function to calculate LCM of three numbers.
*/

int lcm(int a,int b,int c)
{
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<a*b*c;L++){
        if(L%a==0&&L%b==0&&L%c==0)
            return L;
    }

}



/*
  5) Define a function to print all the prime factors of a given number .
    [for example Num = 36, prime factors are 2,3]
*/



int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}


int nextPrime(int n)
{
    for(n++;!isPrime(n);n++);
        return n;
}


void printPrimeFactor(int n)
{
    int i=2, flag=1;
    while(n>1)
    {
        while(n%i==0)
        {
            n=n/i;
            flag=0;
        }
        if(flag==0)
            cout<<i<<" ";
        i=nextPrime(i);
    }
}
