class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //M-1-->set(Brute force methode)
        // unordered_set<int> s;
        // for(int val:nums){
        //     if(s.find(val)==s.end()){
        //         s.insert(val);
        //     }
        //     else{
        //         return val;
        //     }
        // }
        // return -1;
        //M-2-->(fast and slow pointer approach)[Optimized approach]
        int slow=nums[0];
        int fast=nums[nums[0]];
        while(fast!=slow){
            fast=nums[nums[fast]];
            slow=nums[slow];
        }
        slow=0;
        while(fast!=slow){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
