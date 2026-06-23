class Solution {
public:
    static bool compare(vector<int>a1,vector<int>a2){
        return a1[0]<a2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare/*(vector<int>a1,vector<int>a2)*/);
        vector<vector<int>>res;
        if(intervals.size()<=1){return intervals;}
        for(int i=0;i<intervals.size();i++){
            if(i==0){
                if(intervals[i][1]>intervals[i+1][0]){
                    res.push_back({intervals[i][0],max(intervals[i][1],intervals[i+1][1])});
                }
                else{
                    res.push_back(intervals[i]);

                }
            }
            else{
                if(res.back()[1]>=intervals[i][0]){
                    res.back()[0]=min(res.back()[0],intervals[i][0]);
                    res.back()[1]=max(res.back()[1],intervals[i][1]);
                }
                else{
                    res.push_back(intervals[i]);
                }
            }
        }
        return res;
    }
};
