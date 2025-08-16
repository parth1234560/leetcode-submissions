class Solution {
public:
    bool isPalindrome(int x) {
        string arr=to_string(x);
        int flag=0;
        for(int i=0;i<arr.length();i++){
            if(arr[i]!=arr[arr.length()-i-1]){
                return 0;
            
            }
        }
     return 1;
    }
};
