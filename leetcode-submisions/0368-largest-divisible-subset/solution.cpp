class Solution {
public:
    vector<int> helper(vector<int>&nums,int i,int prev,vector<vector<vector<int>>>&dp){
        if(i==nums.size()){
            return { };
        }
        if(!dp[i][prev+1].empty()){
            return dp[i][prev+1];
        }
        vector<int> skip=helper(nums,i+1,prev,dp);
        vector<int> pick;
        if(prev==-1 || (nums[prev]%nums[i]==0 || nums[i]%nums[prev]==0)){
            pick=helper(nums,i+1,i,dp);
            pick.insert(pick.begin(),nums[i]);
        }
        dp[i][prev+1]= pick.size()>skip.size()?pick:skip;
        return dp[i][prev+1];
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1));
        sort(nums.begin(),nums.end());
        return helper(nums,0,-1,dp);
    }
};
