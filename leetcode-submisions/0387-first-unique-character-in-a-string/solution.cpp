class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> s_final;
        for(char chars:s){
            s_final[chars]++;
        }
        for(int i=0;i<s.size();i++){
            if(s_final[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
