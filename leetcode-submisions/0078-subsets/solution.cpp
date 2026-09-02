class Solution {
public:
    void finder(vector<vector<int>>&res,vector<int>&num,int i,vector<int>&nums){
        int n=nums.size();
        if(i==n){
            res.push_back(num);
            return;
        }
        num.push_back(nums[i]);
        finder(res,num,i+1,nums);
        num.pop_back();
        finder(res,num,i+1,nums);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>num;
        finder(res,num,0,nums);
        return res;
    }
};
