class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<2*n;i++){
            if(i<n){
                continue;
            }
            else{
                nums.push_back(nums[i-n]);
            }
        }
        return nums;
    }
};
