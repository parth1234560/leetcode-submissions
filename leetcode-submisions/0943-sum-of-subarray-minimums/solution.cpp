class Solution {
public:
    int pse(vector<int>&arr,int i){
        int j=i-1;
        while(j>=0){
            if(arr[i]>arr[j]){
                return j;
            }
            j--;
        }
            return -1;
    }
    int nse(vector<int>&arr,int i){
        int j=i+1;
        int n=arr.size();
        while(j<n){
            if(arr[i]>=arr[j]){
                return j;
            }
            j++;
        }
        return n;

    }
    int sumSubarrayMins(vector<int>& arr) {
        long long res=0;
        int n=arr.size();
        int mod=1e9+7;
        vector<int>left(n);
        vector<int>right(n);
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            left[i]=st.empty()?i+1:i-st.top();
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int j=n-1;j>=0;j--){
            while(!st.empty() && arr[st.top()]>arr[j]){
                st.pop();
            }
            right[j]=st.empty()?n-j:st.top()-j;
            st.push(j);
        }
        
        for(int j=0;j<n;j++){
        res=(res+1LL*left[j]*right[j]*arr[j])%mod;
        }
        return int(res);
    }
};
