#include<vector>
#include<iostream>
using namespace std;
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        //very noob code first
        int i=0;
        int j=0;
        long mx=INT_MIN;
        long sum=0;
       
        while(j<N){
           sum=sum+Arr[j];
            if(j-i+1<K){
                j++;
            }
            else
            if(j-i+1==K){
            mx=max(sum,mx);
            sum=sum-Arr[i];
            i++;
            j++;
            }
           
          
           
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends