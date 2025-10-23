class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> un;
        for(int x:nums){
            un[x]++;
        }
        vector<int>vn(2);
        for(int i=1;i<=nums.size();i++){
            if(un[i]==2){
            vn[0]=i;

            }
            if(un[i]==0){
                vn[1]=i;
            }
        }
        return vn;
    }
};
