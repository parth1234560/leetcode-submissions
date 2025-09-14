class Solution {
public:
    int mySqrt(int x) {
       if (x<2){return x;}
       int start=0,high=x,ans=0;
       while(start<=high){
        long long mid=start+(high-start)/2;
        if(mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            ans=mid;
            start=mid+1;
        }
        else{
            high=mid-1;
        }
       }
       return ans;
    }
};
