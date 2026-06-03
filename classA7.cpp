#include<iostream>
#include<string.h>
using namespace std;






/*
    1) Define a function to calculate HCF of two numbers.
*/

int hcf(int a,int b)
{
    for(int H=a<b?a:b;H>=1;H--)
    {
        if(a%H==0&&b%H==0)
        {
            return H;
        }
    }

}


/*
    2) define overloaded fucntions to calculate valume of a cuboid of cone 
        and sphere .
*/


int volume(int l,int w,int h)
{
    return l*w*h;
}

float volume(int r,int h)
{
    int v;
    v=3.14*r*r*h/3;
    return v;
}


int volume(int r)
{
    int v;
    v=4/3*3.14*r*r*r;
    return v;
}

// int main(){
//     cout<<volume(12,16);
//     return 0;
// }


/*
    3)  Define a function to print a substing from startindex(inclusive) to
        endlendex(exclusive) . Define  function in such a way that if second argument
        is not provided, string will print till the last possilbe index 
*/


void printSub(char str[],int startIndex,int endIndex)
{
    if(endIndex==-1)
        endIndex=strlen(str);
    for(int i = startIndex;i<endIndex;i++)
        cout<<str[i];
}


/*
    4) define a function  to swap two arrays .
*/

void swapArray(int A[], int B[],int size)
{
    int t;
    for(int i=0;i<size;i++)
    {
        t=A[i];
        A[i]=B[i];
        B[i]=t;
    }
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
        
    }
  
}



// int main(){
//     int A[]= {1,2,3,4,5};
//     int B[]= {5,4,3,2,1};
//     swapArray(A,B,5);
//     return 0;
// }


/*
    5) Define a function to merge two sorted arrays of same size.
*/

int* sortedArrays(int A[],int B[],int size)
{
    int *arr = (int*)malloc(2*size*sizeof(int));
    int i,j,k;
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(A[i]<B[j])
        {
            arr[k]=A[i];
            i++;
        }
        else{
            arr[k]=B[j];
            j++;
        }
    }
    while(i<size)
    {
        arr[k]=A[i];
        i++;
        k++;
    }
    while(j<size)
    {
        arr[k]=B[j];
        j++;
        k++;
    }
    return arr;
}



int main(){
    int A[]= {3,5,8,10,15};
    int B[]={5,6,11,12,13};
    int *arr;
    arr = sortedArrays(A,B,5);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}