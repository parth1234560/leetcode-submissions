class Solution {
public:
    int returner(vector<int>piles,int k){
        int n=piles.size();
        int j=0;
        for(int i=0;i<n;i++){
                if(piles[i]>k){
                    j=j+piles[i]/k;
                    if(piles[i]%k!=0){
                        j++;
                    }
                }
                else{
                    j++;
                }
            
        }
        return j;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(returner(piles,mid)<=h){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
