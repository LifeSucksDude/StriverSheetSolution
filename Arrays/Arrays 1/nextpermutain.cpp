#include<vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
void findNextPermutation(vector<int> &nums){
      //how do i solve this damn no clue let's pick pen and paper and try it.
        // i think i got it
      /*  int n=nums.size();
        int ans=nums[0];
        for(int i=0; i<n-1; i++){
            nums[i]=nums[i+1];
        }
       nums[n-1]=ans;*/
       //naah i didn't understand the lexicographic thing.
       //understood the problem.
       //check from last identify the first two smallest number 
       //ok now i will see some help
       //first approach using stl

     //  next_permutation(nums.begin(),nums.end());

       //implementation of this next_permuation() a optimal solution.
       //we need to identify the small element higher index
       int index=-1;
       for(int i=nums.size()-1; i>0; i--){
           if(nums[i-1]<nums[i]){
                index=i-1;
                break;
           }
       }
       if(index==-1 ){
          reverse(nums.begin(),nums.end());
          return;
       }
       cout<<index<<" "<<endl;
      
      
           for(int i=nums.size()-1; i>=index; i--){
               if(nums[index]<nums[i]){
                   swap(nums[index],nums[i]);
                   break;
               }
           }
            reverse(nums.begin()+index+1,nums.end());
       
      

       
    }
int main(){
     vector<int> ans{2, 1, 5, 4, 3, 0, 0};
    findNextPermutation(ans);

    for (int num : ans) {
        cout << num << " ";
    }
}