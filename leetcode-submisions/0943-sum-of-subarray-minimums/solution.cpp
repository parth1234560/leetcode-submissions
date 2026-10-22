class Solution {
public:
    vector<int>findNse(vector<int>&arr){
        int n=arr.size();
        vector<int>nse(n);
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int>findPsee(vector<int>&arr){
        int n=arr.size();
        vector<int>psee(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        return psee;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int sum=0;
        int mod=(int)(1e9+7);
        int n=arr.size();
        // for(int i=0;i<n;i++){
        //     int mini=arr[i];
        //     for(int j=i;j<n;j++){
        //         mini=min(mini,arr[j]);
        //         sum=(sum+mini)%mod;
        //     }
        // }
        //optimal code-->
        vector<int>nse=findNse(arr);
        vector<int>psee=findPsee(arr);
        int total=0;
        for(int i=0;i<n;i++){
            int left=i-psee[i];
            int right=nse[i]-i;
            total=(total+(1LL*left*right*arr[i])%mod)%mod;

        }
        return total;
    }
};
