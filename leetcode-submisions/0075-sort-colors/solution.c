void sortColors(int* nums, int numsSize) {
    int mid=0,lo=0;
    int high=numsSize-1;
    while(mid<=high){
        if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]=temp;
            mid++;
            lo++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
             int temp=nums[mid];
             nums[mid]=nums[high];
             nums[high]=temp;
             high--;
        }
    }
}
