#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void setZeroesBruteforce(vector<vector<int>>&matrix){
      int n = matrix.size();
        int m = matrix[0].size();
       
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                   for(int p=0; p<m; p++){
                    matrix[i][p]=-1;
                   }
                   for(int p=0; p<n; p++){
                    matrix[p][j]=-1;
                   }
                }
            }
        }
        
       for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
       }
    } 
    //this will work only for binary type matrix

};
class Solution2{
    public:
     void SetZeroesBetter(vector<vector<int>>&matrix){
          int n=matrix.size();
        int m=matrix[0].size();

        vector<int> rows(n);
        vector<int> columns(m);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(matrix[i][j]==0){
                   rows[i]=1;
                   columns[j]=1;
               }
            }
        }
       for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               if(rows[i]==1 || columns[j]==1){
                   matrix[i][j]=0;
               }
            }
        }
        //O(m+n) and O(mn) time
     }
};
