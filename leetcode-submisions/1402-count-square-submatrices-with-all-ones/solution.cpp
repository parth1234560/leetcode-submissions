class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        return count(matrix,m,n);
    }
    int count(vector<vector<int>>&arr,int m,int n){
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0|| j==0){
                continue;
            }
            else if(arr[i][j]!=0){
                arr[i][j]+=min({arr[i][j-1],arr[i-1][j],arr[i-1][j-1]});
            }
        }
       }
       int sum=0;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
       }
       return sum;
    }
};
