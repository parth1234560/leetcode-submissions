class Solution {
public:
    string intToRoman(int num) {
        int value[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string synt[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string result="";
        for(int i=12;i>=0;i--){
        while(num>=value[i]){
            num=num-value[i];
            result=result+synt[i];
            
        }
        }
        return result;
    }
};
