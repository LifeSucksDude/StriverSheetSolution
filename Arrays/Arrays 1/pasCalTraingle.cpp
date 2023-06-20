#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //there can be a way of solving through pnc and recursion too.
           vector<vector<int>> ans;
        for(int i=1; i<=numRows; i++){
            vector<int> ans1(i,1);
            if(i>2){
            for(int j=1; j<ans1.size()-1; j++){
                ans1[j]=ans[i-2][j-1]+ans[i-2][j];

            }
            }
            ans.push_back(ans1);
        }
        return ans;
        //not so optimised solution you can use formula straight forward
        
        
    }
};