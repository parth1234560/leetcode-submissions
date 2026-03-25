class Solution {
public:
    int loot(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()){return 0;}
        if(dp[i]!=-1){
            return dp[i];
        }
            int pick=nums[i]+loot(i+2, nums,dp);
            int skip=loot(i+1,nums,dp);
            dp[i]=max(pick,skip);
            return dp[i];
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return loot(0,nums,dp);
    }
};
