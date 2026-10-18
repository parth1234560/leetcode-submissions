class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int max=*max_element(nums2.begin(),nums2.end());
        vector<int>nge(max+1,-1);
        stack<int>st;
        for(int i=n2-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            if(st.empty()){
                nge[nums2[i]]=-1;
                st.push(nums2[i]);
            }
            else{
                nge[nums2[i]]=st.top();
                st.push(nums2[i]);
            }
        }
        vector<int>res;
        for(int i=0;i<n1;i++){
            res.push_back(nge[nums1[i]]);
        }
        return res;
    }
};
