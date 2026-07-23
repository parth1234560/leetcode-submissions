class Solution {
public:
    static bool sorter(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        vector<pair<char,int>>mp;
        unordered_map<char,int>freq;
        int n=s.size();
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        for(auto x:freq){
            mp.push_back({x.first,x.second});
        }
        sort(mp.begin(),mp.end(),sorter);
        string x="";
        for(int i=0;i<mp.size();i++){
            int count=mp[i].second;
            while(count>0){
            x+=mp[i].first;
            count--;
            }
        }
        return x;
    }
};
