class Solution {
public:
    int LO(vector<int>& nums,int low,int high,int target){
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return ans;
    }
    int FO(vector<int>& nums,int low,int high,int target){
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int lo=LO(nums,0,nums.size()-1,target);
        int fo=FO(nums,0,nums.size()-1,target);

        arr.push_back(fo);
        arr.push_back(lo);
        return arr;
    }
};
