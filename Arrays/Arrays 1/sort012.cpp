#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    void sortColors(vector<int>& nums) {
     //in non constant space this is an easy problem
     //well i must say this is the worst solution one can come up with.
     cout<<nums.size();
     vector<int> ans(nums.size());
     int curr=0;
     for(int i=0; i<nums.size(); i++){
         if(nums[i]==0){
             ans[curr]=0;
             curr++;
         }
     }
     for(int i=0; i<nums.size(); i++){
         if(nums[i]==1){
              ans[curr]=1;
             curr++;
         }
     }
     for(int i=0; i<nums.size(); i++){
         if(nums[i]==2){
             ans[curr]=2;
             curr++;
         }
     }
     nums=ans;
     //let's try solving this in constatn space complexity
      //let's take three pointers 
     int i=0,j=0,k=nums.size()-1;
     //you can do it one go dutch flag algorithm.
    while(j<=k){
      if(nums[j]==0){
          swap(nums[j],nums[i]);
          i++;
          j++;
      }
      else
      if(nums[j]==1){
          j++;
      }
      else{
          swap(nums[k],nums[j]);
       
          k--;
      }
    }



    }
};