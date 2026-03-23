class Solution {
public:
    int loot(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        else{
            int pick=nums[i]+loot(i+2,nums,dp);
            int skip=loot(i+1,nums,dp);
            dp[i]= max(pick,skip);
            return dp[i];
        }
    }
    int tab_loot(vector<int>&nums,vector<int>&dp){
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // vector<int>dp(n+1,-1);
        // if(n==0){
        //     return 0;
        // }
        // else if(n==1){
        //     return nums[0];
        // }
        // else if(n==2){
        //     return max(nums[0],nums[1]);
        // }
        // return tab_loot(nums,dp);
        // via tabulation with space optimized-->
        if(n==1){
            return nums[0];
        }
        else if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int>dp(3,0);
        dp[0]=nums[0];
        dp[1]=max(nums[1],dp[0]);
        for(int i=2;i<n;i++){
        dp[2]=max(dp[1],nums[i]+dp[0]);
            dp[0]=dp[1];
            dp[1]=dp[2];
        }
        return dp[2];
        
    }
};
