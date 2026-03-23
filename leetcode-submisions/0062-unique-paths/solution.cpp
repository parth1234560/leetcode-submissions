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
        vector<vector<int>>dp(2,vector<int>(n,1));
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                            
            dp[1][j]=dp[1][j-1]+dp[0][j];
            }
            for(int j=0;j<n;j++){
                            
            dp[0][j]=dp[1][j];
            }
        }
            return max(dp[0][n-1],dp[1][n-1]);
    }
};
