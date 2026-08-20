class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size();
        for (int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(i==j){
                    sum+=mat[i][j];
                }
                if(i+j==n-1){
                    sum+=mat[i][j];
                }
            }
        }
        if (n % 2 == 1) {
            sum -= mat[n / 2][n / 2];
        }
  return sum;
    }
};