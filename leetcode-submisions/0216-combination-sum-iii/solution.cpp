class Solution {
public:
    void finder(vector<vector<int>>&res,int i,vector<int>&num,int k,int n){
        if(k==0 || i>9){
            if(n==0 && k==0){
                res.push_back(num);
            }
            return;
        }
        for(int j=i;j<=9;j++){
            num.push_back(j);
            finder(res,j+1,num,k-1,n-j);
            num.pop_back();

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>num;
        finder(res,1,num,k,n);
        return res;
    }
};
