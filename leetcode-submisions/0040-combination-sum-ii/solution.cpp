class Solution {
public:
    void finder(vector<vector<int>>&res,int i,int target,vector<int>&nums,vector<int>&candidates){
        int n=candidates.size();
        if(target==0){
            res.push_back(nums);
            return;
        }
        for(int j=i;j<n;j++){
            if(j>i && candidates[j]==candidates[j-1]){
                continue;
            }
            if(candidates[j]>target){
                break;
            }
            nums.push_back(candidates[j]);
            finder(res,j+1,target-candidates[j],nums,candidates);
            nums.pop_back();
        }

        // int n=candidates.size();
        // if(i==n || target<0){
        //     if(target==0){
        //         res.push_back(nums);
        //     }
        //     return;
        // }
        // if(target==0){
        //     res.push_back(nums);
        //     return;
        // }
        // nums.push_back(candidates[i]);
        // finder(res,i+1,target-candidates[i],nums,candidates);
        // nums.pop_back();
        // int c=1;
        // while(i+c<n && candidates[i]==candidates[i+c]){
        //     c++;
        // }
        // finder(res,i+c,target,nums,candidates);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        vector<int>num;
        finder(res,0,target,num,candidates);
        return res;
    }
};
