class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        int ans=0;
        while(low<high){
            int mid=(low+high)/2;
            if(mid%2==1){mid--;}
            if(mid+1!=nums.size() && nums[mid]==nums[mid+1]){
                low=mid+2;
            }
            else if(mid+1==nums.size() || nums[mid]!=nums[mid+1]){
                if(mid!=0 && nums[mid]!=nums[mid-1]){return nums[mid];}

                else{
                    high=mid-1;
                }
            }

        }
        return nums[low];
    }
};
