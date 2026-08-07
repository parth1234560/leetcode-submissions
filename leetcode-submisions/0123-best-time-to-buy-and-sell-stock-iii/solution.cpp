class Solution {
public:
    int finder(vector<int>&prices,int i,int buy,int maxm,vector<vector<vector<int>>>&dp){
        int n=prices.size();
        if(i>=n || maxm>=2){
            return 0;
        }
        if(dp[buy][maxm][i]!=-1){
            return dp[buy][maxm][i];
        }
        if(buy==0){
            int a=-prices[i]+finder(prices,i+1,1,maxm,dp);
            int b=finder(prices,i+1,0,maxm,dp);
            return dp[buy][maxm][i]=max(a,b);
        }
        if(buy==1){
            int a=prices[i]+finder(prices,i+1,0,maxm+1,dp);
            int b=finder(prices,i+1,1,maxm,dp);
            return dp[buy][maxm][i]=max(a,b);
        }
        return 0;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(2,vector<int>(n+1,-1)));
        int maxm=0;
        int buy=0;
        return finder(prices,0,buy,maxm,dp);
    }
};
