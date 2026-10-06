class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int res=0;
        int l=0;
        int r=0;
        vector<int>hash(3,0);
        while(r<n){
                hash[s[r]-'a']++;
                while(hash[1]>0 && hash[0]>0 && hash[2]>0){
                    res=res+(n-r);
                    hash[s[l]-'a']--;
                    l++;
                }
                r++;
        }
        return res;
    }
};
