class Solution {
public:
    bool isDigit(int n){
        for(int i=0;i<10;i++){
            if(n==i){
                return true;
            }
        }
        return false;
    }
    int myAtoi(string s) {
        long long int num=0;
        int i=0;
        int n=s.size();
        int sign=1;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && (s[i]=='+'||s[i]=='-')){
            if(s[i]=='+'){
                sign=1;
            }
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        while(i<n && isDigit(s[i]-'0') ){
            num=num*10+(s[i]-'0');
        if(num>INT_MAX){
            return sign==1? INT_MAX: INT_MIN;
        }
            i++;
        }
        if(num>INT_MAX){
            return sign==1? INT_MAX: INT_MIN;
        }
        return num*sign;
    }
};
