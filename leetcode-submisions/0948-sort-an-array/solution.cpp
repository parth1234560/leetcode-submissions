class Solution {
public:
    void merge(vector<int>& arr,int low,int mid,int high){
        int i=0,start=low,end=mid+1;
        vector<int> temp;
       while(start<=mid && end<=high ){
        if(arr[start]<arr[end]){
            temp.push_back(arr[start++]);
        }
        else{
            temp.push_back(arr[end++]);
        }
       }
       while(start<=mid){
            temp.push_back(arr[start++]);

       }
       while(end<=high){
        temp.push_back(arr[end++]);
       }
       for(i=low;i<=high;i++){
        arr[i]=temp[i-low];
       }
    }
    void merge_sort(vector<int>& arr,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            
            merge_sort(arr,low,mid);
            merge_sort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};
