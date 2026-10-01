class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,zeroes=0;
        int max_len=0;
        
        while(j<nums.size()){
            if(nums[j]==0){
                zeroes++;
            }
            if(zeroes>k){
                while(zeroes>k){
                if(nums[i]==0){
                    zeroes--;
                }
                i++;
                }
            }
            int len=j-i+1;
            max_len=max(max_len,len);
            j++;
        }
        return max_len;
    }
};
