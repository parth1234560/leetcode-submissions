class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum_of_odd=0;
        int sum_of_even=0;
        for(int i=0;i<=2*n;i++){
            if(i%2!=0){
            sum_of_odd=sum_of_odd+i;}
            if(i%2==0){
            sum_of_even=sum_of_even+i;
            }
        }
        if(sum_of_odd>sum_of_even){return gcd(sum_of_even,sum_of_odd);}
        else{
            return gcd(sum_of_odd,sum_of_even);
        }
    }
    int gcd(int a,int b){
        if(a==0){return b;}
        else{
            return gcd(b%a,a);
        }
    }
};
