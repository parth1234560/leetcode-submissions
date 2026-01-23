class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       int n=grid.size();
       unordered_map<int,int>num;
       for(int i=1;i<=n*n;i++){
        num[i]=1;
       } 
       for(auto arr : grid){
        for(int number : arr){
            num[number]--;
        }
       }
       vector<int>result;
       for(auto pair:num ){
        if(pair.second==-1 ){
            result.push_back(pair.first);

        }
       }

       for(auto pair:num ){

       if(pair.second==1){
            result.push_back(pair.first);
        }
       }
       return result;
    }
};
