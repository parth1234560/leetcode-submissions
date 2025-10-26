class Solution {
public:
    int greater(vector<int>& nums,int x){
    int count=0;
    for(int y:nums){
        if(y>=x){
            count++;
        }
    }
    if(count==x){
        return true;
    }
    return false;
    }
    int specialArray(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++){
            if(greater(nums,i)){
                return i;
            }
        }
        return -1;
    }
};
