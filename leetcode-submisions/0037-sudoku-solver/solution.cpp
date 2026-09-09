class Solution {
public:
    bool isValid(vector<vector<char>>&board,int n,int m,char ch){
        for(int i=0;i<9;i++){
            if(board[n][i]==ch){return false;}
        }
        for(int j=0;j<9;j++){
            if(board[j][m]==ch){return false;}
        }
        for(int i=0;i<9;i++){
            if(board[3*(n/3)+i/3][3*(m/3)+i%3]==ch){return false;}
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(char k='1';k<='9';k++){
                        if(isValid(board,i,j,k)){
                            board[i][j]=k;
                            if(solve(board)){
                                return true;
                            }
                            board[i][j]='.';
                        }
                    }
                return false; //No digit worked
                }
            }
        }
        return true; //all digitt filled
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
