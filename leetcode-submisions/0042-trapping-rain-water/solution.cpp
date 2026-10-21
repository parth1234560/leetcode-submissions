class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>suffixmax(n);
        suffixmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmax[i]=max(suffixmax[i+1],height[i]);
        }
        int prefixmax=height[0];
        int sum=0;
        for(int i=0;i<n;i++){
            prefixmax=max(prefixmax,height[i]);
            if(prefixmax>height[i] && suffixmax[i]>height[i]){
            sum=sum+min(prefixmax,suffixmax[i])-height[i];
            }

        }
        return sum;
    }
};
