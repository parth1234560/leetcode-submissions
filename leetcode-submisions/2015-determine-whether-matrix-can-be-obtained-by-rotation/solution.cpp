class Solution {
public:
    bool isequal(vector<vector<int>> mat,vector<vector<int>>target){
        int n=mat.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]!=target[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int count=0;
        while(!isequal(mat,target) && (count<4)){
            vector<vector<int>> dummy(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    dummy[i][j]=mat[j][n-i-1];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mat[i][j]=dummy[i][j];
                }
            }
            count++;
        }
        if(count>=4){
            return false;
        }
        
        return true;
    }
};
