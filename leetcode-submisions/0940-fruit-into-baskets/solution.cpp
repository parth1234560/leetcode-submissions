class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int i=0,j=0;
        unordered_map<int,int>mp;
        int max_len=0;
        while(j<fruits.size()){
            mp[fruits[j]]++;
                while(mp.size()>2){
                    mp[fruits[i]]--;
                    if(mp[fruits[i]]==0){
                        mp.erase(fruits[i]);
                    }
                    i++;
                }
            int len=j-i+1;
        max_len=max(max_len,len);
            j++;
        }
        return max_len;
    }
};
