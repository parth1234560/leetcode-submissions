class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> res_matrix) {
        if(res_matrix.empty() || res_matrix[0].empty()){ return {};}
        int n=res_matrix[0].size();
    int m=res_matrix.size();
    vector<int>result;
      int top=0,right=n-1,bottom=m-1 ,left=0;
      while(top<=bottom &&  right>=left){
        for(int i=left;i<=right;i++){
            result.push_back(res_matrix[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            result.push_back(res_matrix[i][right]);
        }
        right--;
        if(top<=bottom ){
        for(int i=right;i>=left;i--){
            result.push_back(res_matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right ){
        for(int i=bottom;i>=top;i--){
            result.push_back(res_matrix[i][left]);
        }
        left++;
        }
      } 
      return result;
    }
};
