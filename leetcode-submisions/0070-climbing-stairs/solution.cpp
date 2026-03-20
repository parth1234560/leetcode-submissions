class Solution {
public:
    int no_steps(vector<int>&ap,int n){
        if(n<ap.size() && ap[n]!=-1){
            return ap[n];
        }
        ap[n]= no_steps(ap,n-1)+no_steps(ap,n-2);
        return ap[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        if(n==0 || n==1){
            return 1;
        }
        dp[0]=1;
        dp[1]=1;
        return no_steps(dp,n);

    }
};
