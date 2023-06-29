#include<vector>
#include<string>
#include<map>
using namespace std; 
class Solution {
public:
void subSequence(int i,vector<int> &ds,vector<vector<int>> &ans,int target,int s,int n,vector<int> &candidates){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int k=i; k<n; k++){
            if(k>i && candidates[k]==candidates[k-1])continue; //avoid duplicate
            if(candidates[k]>target){
                break;
            }
          
           
            ds.push_back(candidates[k]);
            
            subSequence(k+1,ds,ans,target-candidates[k],s,n,candidates);
            ds.pop_back();
       
          
        }
      
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        //This is exactly the problem of the target sum and is pretty easy rn for me.
        //This is quiet diff as we want only unique and answer in sorted order.
      sort(candidates.begin(),candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        subSequence(0,ds,ans,target,0,candidates.size(),candidates);
          

        return ans;
       
      
       
    }
};
int main(){
//this is same as target sum.
}