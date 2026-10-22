class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        // vector<int>suffixmax(n);
        // suffixmax[n-1]=height[n-1];
        // for(int i=n-2;i>=0;i--){
        //     suffixmax[i]=max(suffixmax[i+1],height[i]);
        // }
        // int prefixmax=height[0];
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     prefixmax=max(prefixmax,height[i]);
        //     if(prefixmax>height[i] && suffixmax[i]>height[i]){
        //     sum=sum+min(prefixmax,suffixmax[i])-height[i];
        //     }

        // }

        int sum=0;
        //optimal approach-->
        int l=0;
        int r=height.size()-1;
        int lMax=0;
        int rMax=0;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]<lMax){
                sum+=lMax-height[l];
                }
                else{
                    lMax=height[l];

                }
                l++;
            }
            else{
                if(height[r]<rMax){
                sum+=rMax-height[r];
                }
                else{
                    rMax=height[r];

                }
                r--;
            }
        }
        return sum;
    }
};
