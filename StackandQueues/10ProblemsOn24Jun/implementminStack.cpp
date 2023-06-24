#include<stack>
//a better approach for this problem do exist.
class MinStack {
    stack<int> s;
    stack<int> minStack;
    int minNumber=INT_MAX;
    int N;
public:
    MinStack() {
        N=0;
    }
    
    void push(int val) {
       
       
         if(minStack.empty()|| val<=minStack.top()){
               minStack.push(val);
             
         }
        
         
        
         
         s.push(val);
        
        
    }
    //we are almost there bro.
    
    void pop() {
        if(s.top()==minStack.top()){
            minStack.pop();
           
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
     return minStack.top();
    }
};