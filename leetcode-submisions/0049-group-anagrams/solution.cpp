class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>s1;
        for(int i=0;i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
           // if(s1.find(n)!=s1.end()){
                s1[key].push_back(strs[i]);
           // }
            //else{
           //     s1[n]=
           // }
        }
        vector<vector<string>>s_final;
        for(auto& q: s1){
            s_final.push_back(q.second);
        }
        return s_final;
    }
};
