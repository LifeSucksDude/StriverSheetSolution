#include<iostream>
#include<vector>

using namespace std;
int printSumSubsequences(int i,int sum,int n,int arr[],int s){
if(i==n){
    if(s==sum){
       
      return 1;
        
    
    
    }
    else{
        return 0;
    }
}


s=s+arr[i];
int l=printSumSubsequences(i+1,sum,n,arr,s);

  


s-=arr[i];
int r=printSumSubsequences(i+1,sum,n,arr,s);
return (l+r) ;
}
int main(){

int arr[]={1,6,7,7,4,6,3,3,2,1};

cout<<printSumSubsequences(0,14,10,arr,0);
}