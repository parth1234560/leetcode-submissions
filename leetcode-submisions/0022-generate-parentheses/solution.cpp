class Solution {
public:
    void adder(vector<string>&res,string& x,int l,int r,int n){
        if(l==r && l==n){
            res.push_back(x);
        }
        if(l<n){
            x.push_back('(');
            adder(res,x,l+1,r,n);
            x.pop_back();
        }
        if(r<n && r<l){
            x.push_back(')');
            adder(res,x,l,r+1,n);
            x.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>res;
        string x="";
         adder(res,x,0,0,n);
         return res;
    }
};
