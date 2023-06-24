#include<string>
using namespace std;
#include<stack>
class Solution {
public:
    bool isValid(string s) {
       //using a two pointer approach won't work as [[]]{}() it can be like this to
       stack<char> stackit;
       int i=0;
      while (i < s.size()) {
            if (!stackit.empty() && stackit.top() == '[' && s[i] == ']') {
                stackit.pop();
            } else if (!stackit.empty() && stackit.top() == '(' && s[i] == ')') {
                stackit.pop();
            } else if (!stackit.empty() && stackit.top() == '{' && s[i] == '}') {
                stackit.pop();
            } else {
                stackit.push(s[i]);
            }
            
            i++;
        }
        
        return stackit.empty();
    }
};