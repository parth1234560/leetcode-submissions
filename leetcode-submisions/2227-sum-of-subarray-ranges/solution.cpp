class Solution {
public:
    vector<int> findpse(vector<int>&nums){
        int n=nums.size();
        int sum=0;
        stack<int>st;
        vector<int>arr(nums.size());
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            arr[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return arr;
    }
    vector<int> findnsee(vector<int>&nums){
        int n=nums.size();
        int sum=0;
        stack<int>st;
        vector<int>arr(nums.size());
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            arr[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return arr;
    }
    vector<int> findpge(vector<int>&nums){
        int n=nums.size();
        int sum=0;
        stack<int>st;
        vector<int>arr(nums.size());
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }
            arr[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return arr;
    }
    vector<int> findngee(vector<int>&nums){
        int n=nums.size();
        int sum=0;
        stack<int>st;
        vector<int>arr(nums.size());
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }
            arr[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return arr;
    }
    long long min_finder_subarray(vector<int>& nums) {
    int n = nums.size();
    vector<int> pse = findpse(nums);
    vector<int> nsee = findnsee(nums);
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += 1LL * (i - pse[i]) * (nsee[i] - i) * nums[i];
    }

    return sum;
}
long long max_finder_subarray(vector<int>& nums) {
    vector<int> pge = findpge(nums);
    vector<int> ngee = findngee(nums);
    int n = nums.size();
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += 1LL * (i - pge[i]) * (ngee[i] - i) * nums[i];
    }

    return sum;
}
    long long subArrayRanges(vector<int>& nums) {
    long long largest = max_finder_subarray(nums);
    long long smallest = min_finder_subarray(nums);

    return largest - smallest;
}
};
