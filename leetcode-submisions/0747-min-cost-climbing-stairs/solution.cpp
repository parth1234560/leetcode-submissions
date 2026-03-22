class Solution {
public:
    //memoization
    int minCost(vector<int>&dp,vector<int>&cost,int i){
        if(i>=cost.size()){return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
        dp[i]=cost[i]+min(minCost(dp,cost,i+1),minCost(dp,cost,i+2));
        return dp[i];
    }
    int minCost_tab(vector<int>&dp,vector<int>&cost){
        int n=cost.size();
        dp[0]=cost[0];
        dp[1]=min(cost[1],cost[0]);
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==1){return cost[0];}
        vector<int>dp(cost.size()+1,-1);
        return min(minCost(dp,cost,0),minCost(dp,cost,1));
    }
};
