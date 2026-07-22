class Solution {
public:
    string largestOddNumber(string num) {
        string x="";
        int z=-1;
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                int k=0;
                while(k<=i && num[k]=='0'){
                    k++;
                }
                return num.substr(k,i-k+1);
            }
        }
        return x;
    }
};
