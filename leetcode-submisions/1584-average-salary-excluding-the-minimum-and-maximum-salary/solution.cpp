class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int smallest=0,largest=0;
        for(int i=0;i<n;i++){
            if(salary[i]>salary[largest]){
                largest=i;
            }
            if(salary[i]<salary[smallest]){
                smallest=i;
            }

        }
        salary[smallest]=0;
        salary[largest]=0;
        double sum=0;
        for(int i=0;i<n;i++){
            sum+=salary[i];

        }
        return sum/(salary.size()-2);

    }
};
