class Solution {
public:
    void finder(vector<string>&res,string& x,int i,string& digit,unordered_map<char,string>&y){
        int n=digit.size();
        if(i>=n){
            res.push_back(x);
            return;
        }
            int maxl=y[digit[i]].size();
            for(int l=0;l<maxl;l++){
                
            x=x+y[digit[i]][l];
            finder(res,x,i+1,digit,y);
            x.pop_back();
            }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>mobile={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        vector<string>res;
        string x;
        finder(res,x,0,digits,mobile);
        return res;
    }
};
