class Solution {
public:
    int max_finder(vector<int>&x,int i){
        int max=x[i];
        int n=x.size();
        for(int l=i;l<n;l++){
            if(max<x[l]){
                max=x[l];
            }
        }
        return max;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_profit=0;
        int min=prices[0];
        for(int i=0;i<prices.size();i++){
            if(min>prices[i]){
                min=prices[i];
            }
            int profit=prices[i]-min;
            if(profit>max_profit){
                max_profit=profit;
            }
        }
            return max_profit;
    }
};
