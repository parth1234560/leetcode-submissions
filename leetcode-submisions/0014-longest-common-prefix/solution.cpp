class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string s="";
        
        for(int i=0;i<strs[0].size();i++){
            int ch=strs[0][i];
            bool match=true;
            for(int j=1;j<n;j++){
                if(strs[0][i]!=strs[j][i]){
                    match=false;break;
                }
                
            }
            if(match==true){
                    s=s+strs[0][i];
                }
                else{
                    break;
                }
        }
        return s;
    }
};
