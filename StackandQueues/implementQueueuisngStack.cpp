#include<iostream>
#include<stack>
using namespace std;
class MyQueue {
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(!output.empty()){
           int a= output.top();
           output.pop();
           return a;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int a=output.top();
            output.pop();
           return a;
        }
    }
    
    int peek() {
        if(!output.empty()){
         return output.top();
        }
        else{
        while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int a=output.top();
           
           return a;
        }
    }
    
    bool empty() {
        if(output.empty()&& input.empty()){
            return true;
        }
       
            return false;
        
    }
};

int main(){

}