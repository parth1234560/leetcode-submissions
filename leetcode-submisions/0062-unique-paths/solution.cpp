class Solution {
public:
// memoization function
    // int diffPaths(int m,int n,vector<vector<int>>&dp){
    //     if(m==1 || n==1){
    //         return 1;
    //     }
    //     else if(dp[m][n]!=-1){
    //         return dp[m][n];
    //     }
    //     dp[m][n]=diffPaths(m-1,n,dp)+diffPaths(m,n-1,dp);
    //     return dp[m][n];
    // }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i][j-1]+dp[i-1][j];
            }
        }
            return dp[m-1][n-1];
    }
};
