class Solution {
public:
    static bool max(int a,int b){
        return a>b;
    }
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        vector<double>prices2(n);
        for(int i=0;i<n;i++){
            prices2[i]=float(prices[i]);
        }
        sort(prices2.begin(),prices2.end(),max);
        sort(discounts.begin(),discounts.end(),max);
        int i=0,j=0;
        while(i<n && j<m){
            prices2[i]=(prices2[i]*(100-discounts[j]))/100.00;
            i++;
            j++;
        }
        double min=0;
        for(int i=0;i<n;i++){
            min=min+prices2[i];
        }   
        return min;
    }
};
