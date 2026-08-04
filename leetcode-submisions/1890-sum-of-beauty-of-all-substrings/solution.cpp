class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
        vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int min=INT_MAX;
                int max=INT_MIN;
                for(int k=0;k<26;k++){
                    if(min>freq[k] && freq[k]!=0){
                        min=freq[k];
                    }
                    if(max<freq[k] && freq[k]!=0){
                        max=freq[k];
                    }


                }
                if(max-min!=0){
                    count=count+(max-min);
                }
            }
        }
        return count;
    }
};
