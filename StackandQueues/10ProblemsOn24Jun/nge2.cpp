#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
         stack<int> s;
       vector<int> ans;
        vector<int> nge;
        for(int i=2*nums.size()-1; i>=0; i--){
            if(s.empty()){
                s.push(nums[i%nums.size()]);
                nge.push_back(-1);
            }
            else {
                if(s.top()>nums[i%nums.size()] && !s.empty()){
                      nge.push_back(s.top());
                    s.push(nums[i%nums.size()]);
                  
                }
                else{
                    while( !s.empty()&&s.top()<=nums[i%nums.size()]){
                       
                            s.pop();
                       
                    }
                   
                    if(!s.empty()){
                    nge.push_back(s.top());
                     s.push(nums[i%nums.size()]);
                    }
                    else{
                        nge.push_back(-1);
                         s.push(nums[i%nums.size()]);
                    }

                }
            }
        }
       for(int i=0; i<nums.size(); i++){
           ans.push_back(nge[nge.size()-1-i]);
       }
       return ans;
    }
};