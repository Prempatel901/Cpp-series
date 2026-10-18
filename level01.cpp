#include<iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            bool found = false;
            for(int j =0;j<n;j++){
                if(i==j){
                    continue;
                }
                else if(nums[i]==nums[j]){
                    found = true;
                    break;
                }
            }
            if(found==false){
                sum+=nums[i];
            }
        }
        return sum;
        
    }
};