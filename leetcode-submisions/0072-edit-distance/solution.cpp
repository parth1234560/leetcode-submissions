class Solution {
public:
    int min_finder(string& word1,string& word2,vector<vector<int>>&dp,int i,int j){
        if(i<0){
            return j+1;
        }
        else if(j<0){
            return i+1;
        }
        else if(dp[i][j]!=-1){
            return dp[i][j];
        }
        else if(word1[i]==word2[j]){
            dp[i][j]= min_finder(word1,word2,dp,i-1,j-1);
        }
        else{
            dp[i][j]=1+min(min_finder(word1,word2,dp,i-1,j-1),min(min_finder(word1,word2,dp,i,j-1),min_finder(word1,word2,dp,i-1,j)));
            return dp[i][j];
        }
        return dp[i][j];
    }
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return min_finder(word1,word2,dp,n1-1,n2-1);
    }
};
