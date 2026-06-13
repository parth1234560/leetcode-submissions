class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     map<int,int>mp;
    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;

    //     }
    //     for(int i=0;i<nums.size();i++){
    //         if(mp[nums[i]]==1){
    //             return nums[i];
    //         }
    //     }
    //    return -1; 
    //m-2-->
    int s=nums[0];
    for(int i=1;i<nums.size();i++){
        s=s^nums[i];
    }
    return s;
    }
};
