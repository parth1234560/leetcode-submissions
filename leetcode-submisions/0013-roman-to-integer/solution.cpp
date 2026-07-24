class Solution {
public:
    int romanToInt(string s) {
        int i=0;
        int n=s.length();
        int num=0;
        int mp[256]={0};
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        while(i<n){
            if((i+1<n)&& (mp[s[i]]<mp[s[i+1]])){
                num=num-mp[s[i++]];
            }
            else{
                num=num+mp[s[i++]];
            }
        }
        return num;
    }
};
