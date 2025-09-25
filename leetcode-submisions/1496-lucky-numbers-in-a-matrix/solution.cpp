class Solution {
public:
    // int Min_row(vector<int>& arr){
    //     return* min_element(arr.begin(),arr.end());
    // }
    // int Max_cols(vector<vector<int>>&mat,int j){
    //     int mx=mat[0][j];
    //     for(int i=1;i<mat.size();i++){
    //            mx=max(mx,mat[i][j]);
    //     }
    //     return mx;
    // }optimized approach-->
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>min_rows(n,INT_MAX);
        vector<int>max_cols(m,INT_MIN);
        vector<int>lucky_number;
        for(int i=0;i<n;i++){
        for(int j=0;j< m;j++){
            min_rows[i]=min(min_rows[i],matrix[i][j]);
            max_cols[j]=max(max_cols[j],matrix[i][j]);
        }
        }
        sort(min_rows.begin(),min_rows.end());
        sort(max_cols.begin(),max_cols.end());
        int i=0,j=0;
        while(i<n && j<m){
            if(min_rows[i]==max_cols[j]){
                lucky_number.push_back(min_rows[i]);
                i++;j++;
            }
            else if(min_rows[i]<max_cols[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return lucky_number;
    }

    
};
