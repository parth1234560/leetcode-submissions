class Solution {
public:
    void permuter(vector<vector<int>>&res,vector<int>&nums,int i){
        int n=nums.size();
        if(i==nums.size()){
            res.push_back(nums);
            return;
        }
        unordered_map<int,int>mp;
        for(int j=i;j<n;j++){
            if(mp[nums[j]]){
                continue;
            }
            mp[nums[j]]=1;
            swap(nums[i],nums[j]);
            permuter(res,nums,i+1);
            swap(nums[i],nums[j]);

        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        permuter(res,nums,0);
        return res;
    }
};
