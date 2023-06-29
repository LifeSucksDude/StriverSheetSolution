#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    void subSequence(int i,vector<int> &ds,vector<vector<int>> &ans,int target,int s,int n,vector<int> &candidates){
        if(s>target){
            return;
        }
        if(i==n){
           
            if(s==target){
                ans.push_back(ds);
                
            }
        return;
        }
        ds.push_back(candidates[i]);
        s+=candidates[i];
        subSequence(i,ds,ans,target,s,n,candidates);
         ds.pop_back();
        s=s-candidates[i];
         subSequence(i+1,ds,ans,target,s,n,candidates);

      
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int> >ans;
        subSequence(0,ds,ans,target,0,candidates.size(),candidates);
        return ans;
    }
};