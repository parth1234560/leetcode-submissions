class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
                mult=mult*nums[i];
        }
        vector<int> result(n);
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
            result[i]=mult/nums[i];
            }
            else{
                int dup_mult=1;
                for(int j=0;j<n;j++){
                    if(i!=j){
                        dup_mult=dup_mult*nums[j];
                    }
                }
            result[i]=dup_mult;
            }

        }
        return result;
    }
};
