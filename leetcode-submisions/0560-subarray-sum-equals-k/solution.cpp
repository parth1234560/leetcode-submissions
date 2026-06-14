class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             int sum=nums[i];
//             if(sum==k){
//                 count++;
//             }
// for(int j=i+1;j<nums.size();j++){
// sum=sum+nums[j];
// if(sum==k){
//     count++;
// }
// }
//         }
//         return count;
//     }



//optimized way-->
unordered_map<int,int>prefix;
int count=0;
int sum=0;
prefix[0]=1;
for(int i=0;i<nums.size();i++){
sum=sum+nums[i];
int oldprefix=sum-k;
    if(prefix.find(oldprefix)!=prefix.end()){
        count=count+prefix[oldprefix];
    }
prefix[sum]++;
}
return count;
    }
};
