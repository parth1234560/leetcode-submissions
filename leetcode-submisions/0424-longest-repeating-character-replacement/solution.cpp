class Solution {
public:
    int characterReplacement(string s, int k) {
        // Brute force --o(n2)-->
    //     int max_len=0;
    //     for(int i=0;i<s.size();i++){
    //    vector<int>hash(26,0);
    //     int max_freq=0;
    //     for(int j=i;j<s.size();j++){
    //         hash[s[j]-'A']++;
    //     max_freq=max(max_freq,hash[s[j]-'A']);
    //     int changes=(j-i+1)-max_freq;
    //     if(changes<=k){
    //     max_len=max(max_len,j-i+1);
    //     }
    //     else{
    //         break;
    //     }
    //     }
    //     }
    //     return max_len;

    //M2 optimized via sliding window-->
    int r=0;
    int l=0;
    int max_len=0;
    int max_freq=0;
    int n=s.size();
    vector<int>mp(26,0);
    while(r<n){
        mp[s[r]-'A']++;
        max_freq=max(mp[s[r]-'A'],max_freq);
        if(r-l+1-max_freq>k){
            mp[s[l]-'A']--;
            // max_freq=0;
            // for(int i=0;i<26;i++){
            //     max_freq=max(max_freq,mp[i]);
            // }
            l++;
        }
        if(r-l+1-max_freq<=k){
            max_len=max(max_len,r-l+1);
        }
        r++;
    }
    return max_len;

    }
};
