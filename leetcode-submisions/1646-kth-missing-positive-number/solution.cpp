class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>result;
        int i=0;
        while(result.size()<=k){
            if(find(arr.begin(),arr.end(),i)==arr.end()){
                result.push_back(i);
            }
            i++;
        }
        return result[k];
    }
};
