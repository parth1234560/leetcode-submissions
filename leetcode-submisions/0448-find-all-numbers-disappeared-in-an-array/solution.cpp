class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> result;
        set<int> s;
        for(int i=0;i<n;i++){
            if(s.find(nums[i])==s.end()){
                s.insert(nums[i]);
            }
        }
        vector<int>order(s.begin(),s.end());
        int i=1,j=0;
                while (i <= n && j < order.size()) {
            if (order[j] == i) {
                // number exists → move both ahead
                i++;
                j++;
            } else if (order[j] > i) {
                // number missing → push it
                result.push_back(i);
                i++;
            } else {
                // skip smaller (for duplicates)
                j++;
            }
        }
        while (i <= n) {
            result.push_back(i);
            i++;
        }

        return result;

    }
};
