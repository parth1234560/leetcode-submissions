class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string rev="";
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
        for(int i=s.size()-1;i>=0;i--){
            rev+=s[i];
        }
        return lcs(s,rev,s.size()-1,s.size()-1,dp);
    }
    int lcs(string& s1,string& s2,int n1,int n2,vector<vector<int>>&dp){
        if(n1<0 || n2<0){
            return 0;
        }
        else if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        else if(s1[n1]==s2[n2]){
            dp[n1][n2]= 1+lcs(s1,s2,n1-1,n2-1,dp);
            return dp[n1][n2];
        }
        dp[n1][n2]= max(lcs(s1,s2,n1-1,n2,dp),lcs(s1,s2,n1,n2-1,dp));
        return dp[n1][n2];
    }
};
