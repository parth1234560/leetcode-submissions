class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<queue<int>>q(nums.size());
        for(int i=0;i<nums.size();i++){
            for(int j=(i+1)%nums.size();j!=i;j=(j+1)%nums.size()){
                if(nums[i]<nums[j]){
                    q[i].push(nums[j]);
                    break;
                }
                if(i==j){
                    break;
                }
            }

        }
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(q[i].empty()){
                nums[i]=-1;
            }
            else{
                nums[i]=q[i].front();
            }
        }
        return nums;
    }
};
