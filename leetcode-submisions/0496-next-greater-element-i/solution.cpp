class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        vector<int>res;
        for(int x:nums1){
            int isGreater=-1;
            queue<int>q;
            for(int i=n2-1;i>=0;i--){
                if(nums2[i]==x){
                    break;
                }
                else{
                    q.push(nums2[i]);
                }
            }
            while(!q.empty()){
                if(q.front()>x){
                    isGreater=q.front();
                }
                q.pop();
            }
            res.push_back(isGreater);
        }
        return res;
    }
};
