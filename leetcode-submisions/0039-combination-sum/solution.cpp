class Solution {
public:
    void finder(vector<vector<int>>&res,vector<int>&num,vector<int>&candidate,int i,int target){
        int n=candidate.size();
        if(i==n || target<0){
            if(target==0){
                res.push_back(num);
            }
            return;
        }
        if(target==0){
            res.push_back(num);
            return;
        }
        num.push_back(candidate[i]);
        finder(res,num,candidate,i,target-candidate[i]);
        num.pop_back();
        finder(res,num,candidate,i+1,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>num;
        finder(res,num,candidates,0,target);
        return res;
    }
};
