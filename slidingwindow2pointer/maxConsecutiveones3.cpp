#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int m=k;
        int ans=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0) k--;
            if(k<0){
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
           j++;
        }
        return j-i;
    }
};