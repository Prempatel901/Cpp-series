#include<iostream>
#include <vector>
using namespace std;


class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        int secLarg = -1;
        for(int i =1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==largest){
                continue;
            }
            else if(arr[i]>secLarg){
                secLarg = arr[i];
            }
        }
        return secLarg;
    }
};