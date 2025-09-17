class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int arr[gain.size()+1];
        arr[0]=0;
        int sum=arr[0];
        int max_sum=arr[0];
        for(int i=1;i<=gain.size();i++){
            arr[i]=arr[i-1]+gain[i-1];
            if(max_sum<arr[i]){max_sum=arr[i];}
        }
        return max_sum;
    }
};
