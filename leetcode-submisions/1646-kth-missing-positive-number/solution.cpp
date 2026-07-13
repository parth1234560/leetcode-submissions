class Solution {
public:
    int compaitable(vector<int>&arr,int k){
        return arr[k]-(k+1);
    }
    int findKthPositive(vector<int>& arr, int k) {
       int low=0;
       int high=arr.size()-1;
       while(low<=high){
        int mid=(low+high)/2;

        if(compaitable(arr,mid)>=k){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
       }
       return low+k;
    }
};
