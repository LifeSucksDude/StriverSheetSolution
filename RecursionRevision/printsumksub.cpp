#include<iostream>
#include<vector>

using namespace std;
bool printSumSubsequences(vector<int> &ds,int i,int sum,int n,int arr[],int s){
if(i==n){
    if(s==sum){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        
    
    return true;
    }
    else{
        return false;
    }
}

ds.push_back(arr[i]);
s=s+arr[i];
if(printSumSubsequences(ds,i+1,sum,n,arr,s)==true){
    return true;
}
ds.pop_back();
s-=arr[i];
if(printSumSubsequences(ds,i+1,sum,n,arr,s)==true){return true;}
return false;
}
int main(){
vector<int> ds;
int arr[]={1,6,7,7,4,6,3,3,2,1};
int sum=2;
printSumSubsequences(ds,0,14,10,arr,0);
}