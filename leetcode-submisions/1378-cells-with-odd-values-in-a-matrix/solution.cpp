class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> arr(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
            int r=indices[i][0];
            int c=indices[i][1];
        for(int i=0;i<n;i++){arr[r][i]++;}
        for(int i=0;i<m;i++){arr[i][c]++;}
            
        }
        int count=0;
        for(int  i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]%2!=0){count++;}
            }
        }
        return count;
    }
};
