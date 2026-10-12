class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int max=*max_element(nums2.begin(),nums2.end());

        vector<priority_queue<int>>pq(max+1);
        for(int i=0;i<n2;i++){
            for(int j=i+1;j<n2;j++){
                if(nums2[i]<nums2[j]){
                pq[nums2[i]].push(nums2[j]);
                break;
                }
                
            }

        }
        vector<int>res(n1);
        for(int i=0;i<n1;i++){
            if(pq[nums1[i]].empty()){
                res[i]=-1;
            }
            else{
                res[i]=pq[nums1[i]].top();
            }
        }
        return res;

    }
};
