class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int absValue=0;
        for(int x:nums){
            absValue+=x;
        }
        vector<vector<int>> dp(nums.size(),vector<int>(2*absValue+1,-1));
        return findtar(0,0,nums,target,dp,absValue);
    }
    int findtar(int i,int sum,vector<int>&arr,int target,vector<vector<int>>&dp,int x){
        if(i==arr.size()){
            if(sum==target){return 1;}
            else{
                return 0;
            }
        }
        if(dp[i][sum+x]!=-1){
            return dp[i][sum+x];
        }
        int add=findtar(i+1,sum+arr[i],arr,target,dp,x);
        int sub=findtar(i+1,sum-arr[i],arr,target,dp,x);
        dp[i][sum+x]=add+sub;
        return dp[i][sum+x];
    }
};
