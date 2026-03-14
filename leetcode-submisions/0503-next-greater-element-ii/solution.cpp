class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        queue<int>q;
        for(int i=0;i<n;i++){
            int num=nums[i%n];
            int isGreater=-1;
            for(int j=(i+1+n)%n;i!=j;j=(j+1+n)%n){
                if(nums[j]>num){
                    q.push(nums[j]);
                    break;
                }
            }
            while(!q.empty()){
                isGreater=q.front();
                q.pop();
            }
            res.push_back(isGreater);
        }
        return res;
    }
};
