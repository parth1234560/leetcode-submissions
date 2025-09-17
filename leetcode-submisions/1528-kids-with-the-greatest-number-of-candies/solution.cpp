class Solution {
public:
    bool isGreatest(vector<int>& arr,int x){
        for(int i=0;i<arr.size();i++){
            if(x<arr[i]){
                return false;
            }
        }
        return true;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> arr;
        for(int i=0;i<n;i++){
            arr.push_back(isGreatest(candies,candies[i]+extraCandies));
        }
        return arr;

    }
};
