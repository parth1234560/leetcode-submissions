class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            if(n==INT_MIN){
                n++;
                return 1/x*myPow(1/x,-n);
            }
            return myPow(1/x,-n);
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        }
        n--;
        return x*myPow(x,n);
    }
};
