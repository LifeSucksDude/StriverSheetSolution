#include<iostream>
#include<string>
using namespace std;
void generateParenthesis(int n,string &str,int close,int open){

if( close==open && open==n){
    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }
    cout<<endl;
    return;
}
if(open>=close && open<=n){
str.push_back('(');
open++;
generateParenthesis(n,str,close,open);
str.pop_back();
open--;


str.push_back(')');
close++;
generateParenthesis(n,str,close,open);
  str.pop_back();
   close--;
}
   
   
}



int main(){
string str="";
generateParenthesis(1,str,0,0);
}