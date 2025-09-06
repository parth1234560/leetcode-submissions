class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(((mid+1>=nums.size())||(nums[mid]>nums[mid+1]) )&&((mid-1<0)||(nums[mid-1]<nums[mid]))){
                return mid;
            }
            else if(mid+1<nums.size() && nums[mid]<nums[mid+1]){low=mid+1;}
            else{
                high=mid-1;
            }
        }
        return 0;
    }
};
