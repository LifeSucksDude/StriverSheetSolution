#include<iostream>
using namespace std;
int countGoodNumbers(long long n){
      int count;
       if(n<=1){
           return 5;
       }
      else {
          int count;
          if(n%2==0){
              count=5*countGoodNumbers(n-1);
          }
          else{
              count=4*countGoodNumbers(n-1);
          }
          return count;
      }
      
      
   
}
int main(){
int ans=countGoodNumbers(4);
cout<<ans<<endl;
}