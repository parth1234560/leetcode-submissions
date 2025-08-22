class Solution {
public:
    int reverse(int x) {
        if(x>INT_MAX || x<INT_MIN){return 0;}
        long long int num=0;
        while(x!=0){
            int digit=x%10;
            num=num*10+digit;
            if(num>INT_MAX||num<INT_MIN){return 0;}
            x=x/10;
        }
            return (int)num;
    }
};
