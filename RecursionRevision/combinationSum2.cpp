#include<vector>
#include<string>
#include<map>
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
        subSequence(i+1,ds,ans,target,s,n,candidates);
         ds.pop_back();
        s=s-candidates[i];
         subSequence(i+1,ds,ans,target,s,n,candidates);

      
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //This is exactly the problem of the target sum and is pretty easy rn for me.
        //This is quiet diff as we want only unique and answer in sorted order.
        //This way is giving tle.
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        subSequence(0,ds,ans,target,0,candidates.size(),candidates);
           map<vector<int>, int> uniqueVectors;
            for (const vector<int>& vec : ans) {
            uniqueVectors[vec] = 1;

        }
        vector<vector<int>> result;
        for (const auto& pair : uniqueVectors) {
            result.push_back(pair.first);
        }

        return result;
       
      
       
    }
};
int main(){
//this is same as target sum.
}