#include<vector>
#include<iostream>
using namespace std;

class Solution
{
public:
    void subsetAns(int i,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds){
        if(i==arr.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[i]);
        //there can be a better approach too.
        //you can use a sum and not create the subarray again n again
        subsetAns(i+1,arr,ans,ds);  //subsetAns(i+1,arr,sum+arr[i],ans); first recursion 
        ds.pop_back();               //no need to generate the list
        subsetAns(i+1,arr,ans,ds);  //subsetAns(i+1,arr,sum,ans); another recursion call no subtraction as we are not popping or adding it's a constant array now.
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
       vector<vector<int>>ans;
       vector<int> ds;
       subsetAns(0,arr,ans,ds);
        sort(ans.begin(), ans.end());
        vector<int> res;
        //this is not very efficient though
       for (const auto& sum : ans) {
        int sumValue = 0;
        for (int num : sum) {
            sumValue += num;
        }
        res.push_back(sumValue);
    }

        return res;
       
    }
};