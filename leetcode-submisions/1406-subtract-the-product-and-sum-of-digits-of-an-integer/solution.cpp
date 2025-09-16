class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1,sum=0;
        int m=n;
        while(m!=0){
            int digit=m%10;
            prod=prod*digit;
            sum+=digit;
            m=m/10;
        }
        return (prod-sum);
    }
};
