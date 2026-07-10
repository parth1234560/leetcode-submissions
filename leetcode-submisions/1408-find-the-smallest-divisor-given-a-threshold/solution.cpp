class Solution {
public:
    int summer(vector<int>&nums,int mid){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            if(float(nums[i])/float(mid)>nums[i]/mid){
                sum=sum+nums[i]/mid+1;
            }
            else{
            sum=sum+nums[i]/mid;}
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid=(low+high)/2;
            if(summer(nums,mid)<=threshold){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
