class Solution {
public:
    void finder(int n,int i,vector<string>&res,vector<char>& s){
        if(i==n){
            int l=s.size();
            string x="";
            for(int j=0;j<l;j++){
                x=x+s[j];
            }
            res.push_back(x);
            return;
        }
        if(i==0 || s[i-1]!='0'){
            s.push_back('0');
            finder(n,i+1,res,s);
            s.pop_back();
        }
        s.push_back('1');
        finder(n,i+1,res,s);
        s.pop_back();
    }
    vector<string> validStrings(int n) {
        vector<string> res;
        vector<char>s;
        finder(n,0,res,s);
        return res;
    }
};
