#include<queue>
#include<iostream>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
public:   Stack(){
        N=0;
};
    void push(int x){
        q2.push(x);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
         


    }
    void pop(){
        q1.pop();
        N--;
    }
   int  top(){
       return  q1.front();
    }
}
;
int main(){
   Stack st;
   st.push(1);
   st.push(2);
   st.push(3);
   cout<<st.top()<<endl;
   
}
