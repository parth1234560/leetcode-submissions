class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        int i;
       for(i=0;i<nums.size();i++){
        nums[i]=(nums[nums[i]]%n)*n+nums[i];

       }
       for(i=0;i<nums.size();i++){
        nums[i]=nums[i]/n;
       } 
       return nums;
    }
};
