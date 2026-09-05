class Solution {
public:
    void permuter(vector<vector<int>>&res,int i,vector<int>&nums//,unordered_map<int,bool>&mp
    ){
        //M1->>
        // int n=nums.size();
        // if(i==n){
        //     res.push_back(num);
        // }
        // for(int j=0;j<n;j++){
        //     if(!mp[nums[j]]){
        //         num.push_back(nums[j]);
        //         mp[nums[j]]=true;
        //         permuter(res,num,i+1,nums,mp);
        //         num.pop_back();
        //         mp[nums[j]]=false;
        //     }
        // }
        //M2-->
        int n=nums.size();
        if(i==n){
            res.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++){
            swap(nums[i],nums[j]);
        permuter(res,i+1,nums);
            swap(nums[i],nums[j]);


        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        permuter(res,0,nums);
        return res;
    }
    
        
};
