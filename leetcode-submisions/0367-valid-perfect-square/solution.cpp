class Solution {
public:
    bool isPerfectSquare(int num) {
        double f=sqrt(num);
        if((f-int(f))==0){
            return true;
        }
        else{
            return false;
        }
    }
};
