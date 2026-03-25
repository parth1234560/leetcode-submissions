class Solution {
public:
    void generate(int n,int l,int r,string s,vector<string>&res){
        //since akhiri mme hamesha r hi ata hai
        if(r==n){res.push_back(s);return;}
        //since starting me hamesha l hi ata hai
        if(l<n){generate(n,l+1,r,s+"(",res);}
        //r jo hai wo l ke bad hi ayega
        if(r<l){generate(n,l,r+1,s+")",res);}
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        generate(n,0,0,"",res);
        return res;
    }
};
