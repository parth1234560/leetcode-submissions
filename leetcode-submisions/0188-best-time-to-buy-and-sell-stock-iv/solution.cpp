class Solution {
public:
    int calc(vector<int>&prices,int i,int buy,int curr,int k,vector<vector<vector<int>>>&dp){
        int n=prices.size();
        if(i>=n || curr>=k){
            return 0;
        }
        if(dp[buy][curr][i]!=-1){
            return dp[buy][curr][i];
        }
        if(buy==0){
            int a=-prices[i]+calc(prices,i+1,1,curr,k,dp);
            int b=calc(prices,i+1,0,curr,k,dp);
            return dp[buy][curr][i]=max(a,b);
        }
        else if(buy==1){
            int a=prices[i]+calc(prices,i+1,0,curr+1,k,dp);
            int b=calc(prices,i+1,1,curr,k,dp);
            return dp[buy][curr][i]=max(a,b);
        }
        return 0;
    }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(2,vector<vector<int>>(k+1,vector<int>(n+1,-1)));
        return calc(prices,0,0,0,k,dp);
    }
};
