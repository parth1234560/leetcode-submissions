class Solution {
public:
    void solve(vector<vector<string>>&res,vector<string>&board,int col,int n,vector<int>&upper_diag,vector<int>&lower_diag,vector<int>&rower){
        if(col==n){
            res.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(upper_diag[n+row-col]==-1 && lower_diag[row+col]==-1 && rower[row]==-1){
                board[row][col]='Q';
                upper_diag[n+row-col]=1;
                lower_diag[row+col]=1;
                rower[row]=1;
                solve(res,board,col+1,n,upper_diag,lower_diag,rower);
                upper_diag[n+row-col]=-1;
                lower_diag[row+col]=-1;
                rower[row]=-1;
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        //optimized approach-->
        vector<vector<string>>res;
        vector<string> board(n);
        string x(n,'.');
        for(int i=0;i<n;i++){
            board[i]=x;
        }
        vector<int>upper_diag(2*n,-1);
        vector<int>lower_diag(2*n,-1);
        vector<int>row(n,-1);
        solve(res,board,0,n,upper_diag,lower_diag,row);

        return res;
    }
};
