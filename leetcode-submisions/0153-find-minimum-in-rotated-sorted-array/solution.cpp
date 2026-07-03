class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        if(nums.size()==1){return nums[0];}
        while(i<nums.size()-1 && nums[i]<nums[i+1]){
            i++;
        }
        i=i%n;
        if(i==n-1){
            return min(nums[0],nums[i]);
        }
        return nums[i+1];
    }
};
