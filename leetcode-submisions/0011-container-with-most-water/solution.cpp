class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0;
        int n=height.size();
        
        int start=0;int end=n-1;
        while(start!=end){
            int area=min(height[start],height[end])*(end-start);
    if(area>max_area){max_area=area;}
            if(height[start]<height[end]){start++;}
            else{
                end--;
            }
        }
        return max_area;
    }
};
