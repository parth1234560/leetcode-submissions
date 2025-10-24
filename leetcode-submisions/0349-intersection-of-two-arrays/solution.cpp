class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int ptr1=0,ptr2=0;
        set<int>result;
        while(ptr1<nums1.size() && ptr2<nums2.size()){
            if(nums1[ptr1]==nums2[ptr2]){
                result.insert(nums1[ptr1]);
                ptr1++;ptr2++;
            }
            else  if(nums1[ptr1]<nums2[ptr2]){
                ptr1++;
            }
            else{
                ptr2++;
            }
        }
        vector<int>final;
        for(int x:result){
            final.push_back(x);
        }
        return final;
    }
};
