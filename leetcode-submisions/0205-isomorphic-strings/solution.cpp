class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mapper_st;
        unordered_map<char,char>mapper_ts;
        for(int i=0;i<s.size();i++){
            if(mapper_st.find(t[i])!=mapper_st.end()){
            if(mapper_st[t[i]]!=s[i]){
            return false;
            }
            }
            else{
                mapper_st[t[i]]=s[i];
            }

            if(mapper_ts.find(s[i])!=mapper_ts.end()){
                if(mapper_ts[s[i]]!=t[i]){
                    return false;
                }
            }
            else{
                mapper_ts[s[i]]=t[i];
            }
            
        }
        return true;
    }
};
