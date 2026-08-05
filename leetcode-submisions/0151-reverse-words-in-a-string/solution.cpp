class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string x="";
        for(int i=n-1;i>=0;i--){
            while(i>=0 && s[i]==' '){
                i--;
            }
            if(i<0){return x;}
            int j=i;
            while(j>=0 && s[j]!=' '){
                j--;
            }
            if(!x.empty()){
                x=x+" ";
            }
            x=x+s.substr(j+1,i-j);
            i=j;
        }
        return x;
    }
};
