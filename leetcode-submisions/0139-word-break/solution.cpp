class Solution {
public:
//solving via recursion and memoization
    bool finder(int i,string s,unordered_set<string>&st,vector<int>&dp){
        if(i>=s.size()){
            return true;
        }
        else if(dp[i]!=-1){
            return dp[i];
        }
        for(int l=1;i+l<=s.size();l++){
            string temp=s.substr(i,l);
            if(st.find(temp)!=st.end() && finder(i+l,s,st,dp)){
                dp[i]=1;
                return dp[i];
            }
            
        }
        dp[i]=0;
        return dp[i];
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int>dp(s.size(),-1);
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        return finder(0,s,st,dp);
    }
};
