class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       unordered_map<int,int>seen;
       vector<int>arr(2,INT_MAX);
       int n=numbers.size();
       for(int i=0;i<n;i++){
        int x=numbers[i];
        if(seen.count(target-x)!=0){
            arr[0]=seen[target-x]+1;
            arr[1]=i+1;
            return arr;
        }
        seen[x]=i;
       }
       return arr;
    }
};
