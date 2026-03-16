class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>nsl(n);
        vector<int>nsr(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
            nsl[i]=-1;
            }
            else{
                nsl[i]=st.top();

            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
            nsr[i]=n;
            }
            else{
                nsr[i]=st.top();
            }
            st.push(i);
        }
        int mod=1000000007;
        int sum=0;
        for(int i=0;i<n;i++){
            long long left=i-nsl[i];
            long long right=nsr[i]-i;
            sum=(sum+(left*right*arr[i]))%mod;

        }
        return sum;
    }
};
