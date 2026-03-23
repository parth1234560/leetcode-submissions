class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }
                        else{
                    dp[i][j]=1;
                        }
                
                }
                else if(i==0){
                    if(obstacleGrid[i][j-1]==1){
                        dp[i][j]=0;
                    }
                    else{
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }else{
                        dp[i][j]=dp[i][j-1];
                        }
                    }
                }
                else if(j==0){
                    if(obstacleGrid[i-1][j]==1){
                        dp[i][j]=0;
                    }
                    else{
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }
                        else{
                        dp[i][j]=dp[i-1][j];
                        }
                    }
                }
                else{
                    int index=i-1;
                    int jadex=j-1;
                    if(obstacleGrid[i][jadex]==1){
                        jadex=-1;
                    }
                    if(obstacleGrid[index][j]==1){
                        index=-1;
                    }
                    if(index==-1 && jadex==-1){
                        dp[i][j]=0;
                    }
                    else if(index==-1){
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }else{
                        dp[i][j]+=dp[i][jadex];
                        }
                    }
                    else if(jadex==-1){
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }
                        else{
                        dp[i][j]+=dp[index][j];
                        }
                    }
                    else{
                        if(obstacleGrid[i][j]==1){
                            dp[i][j]=0;
                        }
                        else{
                        dp[i][j]=dp[index][j]+dp[i][jadex];
                        }
                    }

                }
            }
        }
        return dp[m-1][n-1];
    }
};
