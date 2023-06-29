#include<iostream>
#include<string>
using namespace std;
void generateBinaryStrings(int n,string str){
if(n==0){
    return;
}
generateBinaryStrings(n-1,str);
}
int main(){
    generateBinaryStrings(5,"00000");
}