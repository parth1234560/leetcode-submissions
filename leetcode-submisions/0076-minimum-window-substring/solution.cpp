class Solution {
public:
    // bool istrue(vector<int>&hash,string& t){
    //     vector<int>bash=hash;
    //     for(int i=0;i<t.size();i++){
    //         if(bash[t[i]]==0){
    //             return false;
    //         }
    //             bash[t[i]]--;
    //     }
    //     return true;
    // }
    string minWindow(string s, string t) {
        int l=0;
        int r=0;
        int s_l=-1;
        int s_r=-1;
        int n=s.size();
        int m=t.size();
        vector<int>hash(256,0);
        int min_len=INT_MAX-1;
        int cut=0;
        for(int i=0;i<m;i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0){cut=cut+1;}
            hash[s[r]]--;
            while(l<n && cut==m){
             if(r-l+1<min_len){
                min_len=r-l+1;
                s_l=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){cut=cut-1;}
                l++;
                }
                r=r+1;
            }
            return s_l==-1?"":s.substr(s_l,min_len);
        }
        // while(r<s.size()){
        //     hash[s[r]]++;
        //     while(l<=r && istrue(hash,t)){
        //         if(r-l+1<min_len){
        //         min_len=r-l+1;
        //         s_l=l;
        //         s_r=r;
        //         }
        //         hash[s[l]]--;
        //         l++;
        //     }
        //         r++;

        // }
        
    };
