class Solution {
public:
    int maxFinder(vector<int>&prices,int i,int* val,vector<vector<int>>&dp){
        int n=prices.size();
        if(i==n){
            return 0;
        }
        if(dp[*val][i]!=-1){return dp[*val][i];}
        if(*val==0){
            *val=1;
            int a=maxFinder(prices,i+1,val,dp)-prices[i];
            *val=0;
            int b=maxFinder(prices,i+1,val,dp);
            return dp[*val][i]= max(a,b);
        }
        if(*val==1){
            *val=0;
            int a=maxFinder(prices,i+1,val,dp)+prices[i];
            *val=1;
            int b=maxFinder(prices,i+1,val,dp);
            return dp[*val][i]= max(a,b);
        }
        return 0;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(2,vector<int>(n,-1));
        int x=0;
        return maxFinder(prices,0,&x,dp);
    }
};
