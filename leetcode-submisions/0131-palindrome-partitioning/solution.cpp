class Solution {
public:
    bool isPalindrome(string s,int i,int j ){
        while(i<j){
            if(s[i]!=s[j]){return false;}
            i++;j--;
        }
        return true;
    }
    void pat(vector<vector<string>>& res,vector<string>&path,string& s,int index){
        if(index==s.size()){
            res.push_back(path);
            return;
        }
            for(int j=index;j<s.size();j++){
                if(isPalindrome(s,index,j)){
                path.push_back(s.substr(index,j-index+1));
                pat(res,path,s,j+1);
                path.pop_back();
                }
            }

    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>path;
        pat(res,path,s,0);
        return res;
    }
};
