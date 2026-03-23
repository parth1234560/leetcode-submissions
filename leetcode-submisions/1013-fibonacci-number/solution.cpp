class Solution {
public:
    int fib(int n) {
        // vector<int> res(n+1,-1);
        // if(n==0 || n==1){
        //     return n;
        // }
        // res[0]=0;res[1]=1;
        // for(int i=2;i<=n;i++){
        //     res[i]=res[i-1]+res[i-2];
        // }
        // return res[n];
        //space optimized solution via tabulation-->
        vector<int>arr(3,0);
        if(n==0 ||n==1){
            return n;
        }
        if(n==2){
            return 1;
        }
        arr[1]=1;
        for(int i=1;i<n;i++){
            arr[2]=arr[0]+arr[1];
            if(i==n-1){
                break;
            }
            arr[0]=arr[1];
            arr[1]=arr[2];
        }
        return arr[2];
    }
};
