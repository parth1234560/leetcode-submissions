class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
       if(n%2==0){
        for(int i=0;i<n/2;i++){
            int j=i+1;
            if(i%2==0){j=-j;}
            arr.push_back(j);
            arr.push_back(-j);
        }
        return arr;
       }
        else{
            for(int i=0;i<=n/2;i++){
                int j=i;
                if(i%2==0){j=-j;}
                arr.push_back(j);
                if(j==0){continue;}
                else{arr.push_back(-j);}
            }
            return arr;
        }
    }
};
