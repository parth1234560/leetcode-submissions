class Solution {
public:
    bool isSafe(vector<string>&board,int row,int col,int n){
        int duprow=row;
        int dupcol=col;
        //up_diagonal
        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        //left of col
        col=dupcol;
        row=duprow;
        while(col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solver(set<vector<string>>&res,vector<string>&board,int col,int n){
        if(col==n){
            res.insert(board);
        }
        for(int row=0;row<n;row++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                solver(res,board,col+1,n);
                board[row][col]='.';
            }
        }

    }
    int totalNQueens(int n) {
        set<vector<string>>res;
        vector<string>board(n);
        string s(n,'0');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solver(res,board,0,n);
        return res.size();
    }
};
