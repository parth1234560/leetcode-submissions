class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum1=0,sum2=0;
        int i=0,j=0;
        while(i<n && j<m){
            sum1=sum1+mat[i++][j++];
        }
        i=0,j=n-1;
        while(i<n && j>=0){
            if(i==j){ i++,j--;continue;}
            else{
            sum2=sum2+mat[i++][j--];
            }
        }
        return sum1+sum2;
    }
};
