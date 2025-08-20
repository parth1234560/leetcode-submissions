class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;
        int n1=0,n2=0,n3=0;
        while(n1<nums1.size()&&n2<nums2.size()){
            if(nums1[n1]<nums2[n2]){
                nums3.push_back(nums1[n1++]);
                n3++;
            }
            else{
                nums3.push_back(nums2[n2++]);
                n3++;
            }
        }
        while(n1<nums1.size()){
            nums3.push_back(nums1[n1++]);
            n3++;
        }
        while(n2<nums2.size()){
            nums3.push_back(nums2[n2++]);
            n3++;
        }
        float median;
        if(n3%2!=0){median=nums3[n3/2];}
        else{
            median=(float(nums3[n3/2-1])+float(nums3[n3/2]))/2;
        }
        return median;
    }
};
