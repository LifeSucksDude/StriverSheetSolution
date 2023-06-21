#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
   int maxSubArray(vector<int>& nums) {
       /* int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum=sum+nums[i];
        }
       int i=0;
       int j=nums.size()-1;
       int vsum=sum;
       while(i<j){
         if(vsum-nums[j]>vsum-nums[i]){
             vsum=vsum-nums[j];
             if(vsum>sum){
              sum=vsum;
             }
              j--;
         }
         else if(vsum-nums[i]>vsum-nums[j]){
             vsum=vsum-nums[i];
             if(vsum>sum){
             sum=vsum;
             }
             i++;
         }
         else if(vsum-nums[i]==vsum-nums[j]){
             int curri=i;
             int currj=j;
             while(nums[i]==nums[j] && i<j){
                 i++;
                 j--;
                 
             }
             if(i==j){
                 i=curri;
                 j=j-1;
                 int tsum=0;
                 for(int k=i; k<j; k++){
                     tsum=tsum+nums[k];
                 }
                 if(tsum>sum){
                     sum=tsum;
                 }
             }
             else 
             if(nums[i]>nums[j] && i!=j){
                   i=curri;
                   j=j-1;
                   int tsum=0;
                  for(int k=curri; k<=j; k++){
                       tsum=tsum+nums[k];
                  }
                  if(tsum>sum){
                      sum=tsum;
                  }
             }
             else  if(nums[i]<nums[j] && i!=j){
                   j=currj;
                   i=i+1;
                   int tsum=0;
                  for(int k=i; k<=j; k++){
                       tsum=tsum+nums[k];
                  }
                  if(tsum>sum){
                      sum=tsum;
                  }
             }
         }
       }
       return sum;*/
       //previous code doesn't uses kadane's algo it's a two pointer solution
       int ans=INT_MIN;
       int sum=0;
       for(int i=0; i<nums.size(); i++){
           sum=sum+nums[i];
           if(sum>ans){
             ans=sum;
           }
          if(sum<0){
              sum=0;
          }
       }
       return ans;
    }
};
int main(){
    
}