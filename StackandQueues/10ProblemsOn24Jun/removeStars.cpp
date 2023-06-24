#include<stack>
#include<string>
#include<vector>
class Solution {
public:
    string removeStars(string s) {
        //first approach using stack
        stack<char> stacks;
        string ans="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*' && !stacks.empty()){
            stacks.pop();
            }
           else{
               stacks.push(s[i]);
           }
            
        }
        if(stacks.empty()){
            return "";
        }
        while(!stacks.empty()){
            ans+=(stacks.top());
            stacks.pop();
        }
        //so memory limit exceeded in this approach.
         reverse(ans.begin(), ans.end());
        return ans;
      /*  string ans="";
        for(int i=0; i<s.size(); i++){
           ans+=s[i];
        }
        return ans;*/
        //error was my way of doing the s=s+s'[i]
    }
};