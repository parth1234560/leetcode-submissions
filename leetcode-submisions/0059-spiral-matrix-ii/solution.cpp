class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int x=1;
        int top=0,left=0,bottom=n-1,right=n-1;
        vector<vector<int>> mat(n,vector<int>(n));
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                mat[top][i]=x;
                x++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                mat[i][right]=x;
                x++;
            }
            right--;
            for(int i=right;i>=left;i--){
                mat[bottom][i]=x;
                x++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                mat[i][left]=x;
                x++;
            }
            left++;
        }
        return mat;

    }
};
