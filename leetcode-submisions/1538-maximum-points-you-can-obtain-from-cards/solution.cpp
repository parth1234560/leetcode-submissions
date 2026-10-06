class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int max_sum=0;
        int n=cardPoints.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[i];
        }
        max_sum=sum;
        for(int i=k-1;i>=0;i--){
            sum=sum-cardPoints[i];
            sum=sum+cardPoints[n-(k-i)];
            if(sum>max_sum){
                max_sum=sum;
            }
        }
    return max_sum;
    }
};
