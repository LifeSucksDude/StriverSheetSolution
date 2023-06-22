#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     //for each element check the aaage waale price O(n2)
    /* int maxSum=INT_MIN;
     for(int i=0; i<prices.size(); i++){
         int sum=0;
         for(int j=i; j<prices.size(); j++){
             sum=prices[j]-prices[i];
            maxSum=max(sum,maxSum);
         }
     }   
     return maxSum;*/
     //tle in the previous soln,can be do a better/optimal approach.
    // we can solve this problem in non constant soace
    vector<int> maxFrEnd(prices.size());
    vector<int> minFrStart(prices.size());
    minFrStart[0]=prices[0];
    maxFrEnd[prices.size()-1]=prices[prices.size()-1];
    for(int i=1;i<prices.size(); i++){
        minFrStart[i]=min(minFrStart[i-1],prices[i]);
    }
    for(int i=prices.size()-2; i>=0; i--){
        maxFrEnd[i]=max(minFrStart[i+1],prices[i]);
    }
    int ans=INT_MIN;
    for(int i=0; i<prices.size(); i++){
        ans=max(maxFrEnd[i]-minFrStart[i],ans);
    }
    return ans;
    }
};