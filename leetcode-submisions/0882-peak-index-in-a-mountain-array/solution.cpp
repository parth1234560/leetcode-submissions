class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        if(arr.size()<=1){return arr[0];}
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1] && ((arr[i]>arr[i+1]) || (i==arr.size()))){
                return i;
            }
        }
        return -1;
    }
};
