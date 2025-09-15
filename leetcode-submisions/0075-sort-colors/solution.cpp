class Solution {
public:
    void sortColors(vector<int>& nums) {
        //brute force sort(nums.begin(),nums.end());
        //optimized in O(n) but 2 passes--> count no of 0,1,2 and then place in array according to that
        // most optimized O(n) but single pass--> DNF(Dutch national flag approach)--->below
        int mid=0,low=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }

    }
};
