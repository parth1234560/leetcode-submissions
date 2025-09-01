class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1){return INT_MAX;}
        long long  divd=llabs(dividend);
        long long divs=llabs(divisor);
        long long count=0;
        for(int i=31;i>=0;i--){
            if(((divd)>>i)>=divs){
                divd-=(divs<<i);
                count+=(1LL)<<i;
            }
        }
        if((dividend<0 && divisor>0) ||(dividend>0 && divisor<0)){
            return -count;
        }
        if(count>INT_MAX){return INT_MAX;}
        if(count<INT_MIN){return INT_MIN;}
        return (int)count;
    }
};
