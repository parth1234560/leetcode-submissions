class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length()){
            return -1;
        }
        for(int i=0;i<haystack.length()-needle.length()+1;i++){
            int flag=0;
            
                for(int j=0,k=i;j<needle.length()&&k<haystack.length();k++,j++){
                    if(haystack[k]!=needle[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0 ){
                    return i;
                }
            }
            return -1;
        }

    
};
