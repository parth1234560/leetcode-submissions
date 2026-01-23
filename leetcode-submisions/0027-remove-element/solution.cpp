class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>bums;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                bums.push_back(nums[i]);
            }
        }
        int k=bums.size();
        for(int i=0;i<k;i++){
                nums[i]=bums[i];
        }
        return k;
        
    }
};
