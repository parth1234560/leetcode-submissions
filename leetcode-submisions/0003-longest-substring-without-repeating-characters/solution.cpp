class Solution {
public:
    int char_finder(string s,int start,int end,char x){
        for(int i=start;i<end;i++){
            if (x==s[i]){return 1;}
        }
        return 0;
    }
    int lengthOfLongestSubstring(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            int max_count=0;
            int hash[256]={0};
            for(int j=i;j<s.length();j++){
                if(hash[s[j]]){
                    break;
                }
                hash[s[j]]++;
                max_count++;
            }
            if(max_count>count){count=max_count;}
        }
        return count;
    }
};
