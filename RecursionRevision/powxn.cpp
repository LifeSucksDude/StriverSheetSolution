#include<iostream>
using namespace std;
double pow(double x,int n){
 
if(n==0){
    return 1;
   
}
else
return x*pow(x,n-1);

//This doesn't work for negative numbers
}
int main(){
    double ans=pow(1,-33);
    cout<<ans<<" ";
}