class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i=0;i<n;i++){
            int maxm=0;
            for(int j=0;j<=i;j++){
                if(nums[j]<nums[i]){
                    maxm=max(maxm,dp[j]);
                }
            }
            dp[i]+=maxm;
        }
        return *max_element(dp.begin(),dp.end());
    }
};
