class Solution {
public:
    void r_c_zero(vector<vector<int>>&matrix,int x,int y){
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            matrix[i][y]=0;
        }
        for(int i=0;i<m;i++){
            matrix[x][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>>a1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    a1.push_back({i,j});
                }
            }
        }
        for(int i=0;i<a1.size();i++){
            r_c_zero(matrix,a1[i].first,a1[i].second);
        }
    }
};
