class Solution {
public:
    int capacitor(vector<int>&weights,int mid){
        int j=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            int sum=0;
            while(i<n && sum+weights[i]<=mid){
                sum=sum+weights[i++];
            }
            j++;
            i--;
        }
        return j;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int n=weights.size();
        int high=0;
        for(int i=0;i<n;i++){
            high=high+weights[i];
        }
        while(low<high){
            int mid=(low+high)/2;
            if(capacitor(weights,mid)<=days){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
