class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>s1,t1;
        //sort(s.begin(),s.end());
        //sort(t.begin(),t.end());
        if(s.length()!=t.length()){return false;}
        int n=s.length();
        for(int i=0;i<n;i++){
            s1[s[i]]++;
            t1[t[i]]++;
        }
        for(int i=0;i<n;i++){
            if(s1[s[i]]!=t1[s[i]]){
                return false;
            }
        }
        return true;
    }
};
