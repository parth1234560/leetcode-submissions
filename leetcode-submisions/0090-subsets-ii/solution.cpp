class Solution {
public:
    void finder(vector<int>&nums,vector<vector<int>>&res,vector<int>&num,int i){
            res.push_back(num);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]){
                continue;
            }
            num.push_back(nums[j]);
            finder(nums,res,num,j+1);
            num.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        vector<int>set;
        finder(nums,res,set,0);
        return res;
    }
};
