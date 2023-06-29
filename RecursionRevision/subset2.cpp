#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    void generateNonDupSubsets(int i,vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums){
        if(i==nums.size()){
          
            return;
        }
       for(int k=i; k<nums.size(); k++){
           if(k>i && nums[k]==nums[k-1]) continue;
           ds.push_back(nums[k]);
          ans.push_back(ds);
           generateNonDupSubsets(k+1,ds,ans,nums);
           ds.pop_back();

       }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    // i want to pick only the subsets that are not duplicate.
       vector<vector<int>> ans;
       vector<int> ds;
       sort(nums.begin(),nums.end());
       generateNonDupSubsets(0,ds,ans,nums);
       vector<int> s;
       ans.push_back(s);
       return ans;
    }
};