class Solution {
public:
    int fact(int n){
        if(n==0 ||n==1){
            return 1;
        }
        return n*fact(n-1);
    }
    void permuter(vector<int>&nums,string&path,int k){
        if(nums.empty()){
            return ;
        }
        int n=nums.size();
        int total_perm=fact(n);
        int per_perm=fact(n-1);
        int i=k/per_perm;
        int rem_k=k%per_perm;
        path=path+to_string(nums[i]);
        int chosen=nums[i];
        nums.erase(nums.begin()+i);
        permuter(nums,path,rem_k);
        nums.insert(nums.begin()+i,chosen);
    }
    string getPermutation(int n, int k) {
        vector<int>nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        string path="";
        k--;
        permuter(nums,path,k);
        return path;
    }
};
