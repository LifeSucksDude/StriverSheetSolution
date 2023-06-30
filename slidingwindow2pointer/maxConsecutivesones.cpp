#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       //maximum window size actually
       int i=-1;
       int j=0;
       int ans=INT_MIN;
       int count=0;
       while(j<nums.size()){
          
           if(nums[j]==1){
               j++;
              
           }
           else if(nums[j]==0){
             
               i=j;
               j++;
               
           }
             count=j-i-1;
             ans=max(count,ans);
       } 
       return ans;
    }
};