class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if(nums.size()<3){return 0;}
        else {
            sort(nums.begin(),nums.end());
            int i=0;
            int j=i+1;
            int k=j+1;
            int n=nums.size();
            int dummy_target=nums[i]+nums[j]+nums[k];
                if(target-dummy_target==0){
                    return dummy_target;
                }
                else{
                    for(i=0;i<n;i++){
                        for(j=i+1;j<n;j++){
                            for(k=j+1;k<n;k++){
                                if(abs(nums[i]+nums[j]+nums[k]-target)<abs(target-dummy_target) && (i!=j)&&(j!=k)&&(i!=k)){                           
                                    dummy_target=nums[i]+nums[j]+nums[k];

                                }
                            }
                        }
                    }
                    
                }
                return dummy_target;


        }
    }
};
