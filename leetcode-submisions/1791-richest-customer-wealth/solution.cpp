class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_count=INT_MIN;
        int n=accounts.size();
        int m=accounts[0].size();
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<m;j++){
                count=count+accounts[i][j];
            }
            if(count>max_count){
                max_count=count;
            }
        }
        return max_count;
    }
};
