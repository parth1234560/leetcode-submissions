class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1;
        bool is_greater=false;
         while(i>=0 && digits[i]+1>=10){
            is_greater=true;
            if(i!=0){
            digits[i]=digits[i]+1-10;
            i--;
            }
            else{
            digits[i]=digits[i]+1-10;
            
                digits.insert(digits.begin(),1);
                i--;
            }
         }
         if(i>=0){
            digits[i]=digits[i]+1;
         }
         return digits;
    }
};
