class Solution {
public:
    string say(int n){
        string res="";
        if(n<=1){
            return "1";
            }
        else{
            map<int,int>freq;
            string arr=say(n-1);
            int x=arr.size();
            for(int i=0;i<x;i++){
                int count=1;
                int j;
                for(j=i+1;j<x && arr[j]==arr[i];j++){
                    count++;
                }
                
                res+=to_string(count);
                res+=arr[i];
                i=j-1;

            }
        }
        return res;
    }
    string countAndSay(int n) {
        string res="";
        res+=say(n);
        return res;
    }
};
