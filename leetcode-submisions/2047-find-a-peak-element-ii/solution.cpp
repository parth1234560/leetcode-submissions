class Solution {
public:
    int find_max_row(vector<vector<int>>&mat,int col){
        int maxRows=0;
        int max=mat[0][col];
        int n=mat.size();
        for(int i=0;i<n;i++){
            if(mat[i][col]>max){
                max=mat[i][col];
                maxRows=i;
            }
        }
        return maxRows;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0;
        int high=mat[0].size()-1;
        int n=mat[0].size();
        while(low<=high){
            int mid=(low+high)/2;
            int row=find_max_row(mat,mid);
            int curr=mat[row][mid];
            int left=(mid>0?mat[row][mid-1]:-1);
            int right=(mid<n-1?mat[row][mid+1]:-1);
            if(curr>left && curr>right){
                return {row,mid};
            }
            else if(curr<left){
                high=mid-1;
            }
            else {
                low=mid+1;
            }

        }
        return {-1,-1};
    }
};
