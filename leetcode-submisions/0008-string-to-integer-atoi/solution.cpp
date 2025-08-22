class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int i=0;
        int sign=1;
        long long num=0;
        while(i<n && s[i]==' '){i++;}
        while(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='+'){sign=1;i++;break;}
            else{
                sign=-1;
                i++;
                break;
            }
            i++;
        }
        while(i<n && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            if(sign*num>INT_MAX){
                return INT_MAX;
            }
            if(sign*num<INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return(int)(sign*num);
    }
};
