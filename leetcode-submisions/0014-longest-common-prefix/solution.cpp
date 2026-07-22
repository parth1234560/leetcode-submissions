class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0,j=0;
        int n=strs.size();
        sort(strs.begin(),strs.end());
        int m=strs[0].size();
        string x="";
        for(i=0;i<m;i++){
            int found=1;
            for(j=0;j<n-1;j++){

                if(strs[j][i]!=strs[j+1][i]){
                    found=0;
                    break;
                }
            }
            if(found==1){
                x=x+strs[0][i];
            }
            else{
                break;
            }
        }
        return x;
    }
};
