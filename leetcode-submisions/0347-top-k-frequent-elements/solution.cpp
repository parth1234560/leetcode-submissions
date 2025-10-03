class Solution {
public:
    static bool compareto(pair<int,int> a,pair<int,int> b){
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<pair<int,int>> number;
        for(auto &q:freq){
            number.push_back({q.first,q.second});
        }

        sort(number.begin(),number.end(),compareto);
        vector<int>result;
        int i=0;
        while(i<k){
            result.push_back(number[i].first);
            i++;
        }
    return result;
    }
};
