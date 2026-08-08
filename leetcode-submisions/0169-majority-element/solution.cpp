class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int part=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(count==0){
                part=nums[i];
            }
            if(part==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return part;
    }
};
