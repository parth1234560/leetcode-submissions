class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int j=0;
        while(j<nums.size() && nums[j]<lower){
            j++;
        }
        if(j>=nums.size()){
            return {{lower,upper}};
        }
        int back=lower;
        int curr=nums[j];
        if(curr>upper){
            return {{back,upper}};
        }
        if(curr-back>=1){
            res.push_back({back,curr-1});
        }
        int n=nums.size()-1;
        while(n>=0 && nums[n]>upper){
            n--;
        }
        if(n<0){
            return {{lower,upper}};
        }
        for(int i=j+1;i<=n;i++){
            back=curr;
            curr=nums[i];
        if(curr-back>1){
            res.push_back({back+1,curr-1});
        }
            
        }
        back=curr;
        curr=upper;
        if(curr-back>=1){
            res.push_back({back+1,curr});
        }
        
     return res;   
    }
};
