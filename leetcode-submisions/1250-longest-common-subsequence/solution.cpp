class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        if(n1==0||n2==0){return 0;}
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return lcs(dp,text1,text2,n1-1,n2-1);
    }
    int lcs(vector<vector<int>>&dp,string& text1,string& text2,int n1,int n2){
        if(n1<0 || n2<0){
            return 0;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        if(text1[n1]==text2[n2]){
            dp[n1][n2]= 1+ lcs(dp,text1,text2,n1-1,n2-1);
            return dp[n1][n2];
        }
        dp[n1][n2]=max(lcs(dp,text1,text2,n1-1,n2),lcs(dp,text1,text2,n1,n2-1));
            return dp[n1][n2];
    }
};
