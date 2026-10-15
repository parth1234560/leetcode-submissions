class Solution {
public:
    bool finder(int target,vector<int>&side,vector<int>&matchsticks,int i){
        int n=matchsticks.size();
        if((i==n) &&(side[0]==target && side[1]==target && side[2]==target && side[3]==target)){
            return true;
        }
        else if(i==n || side[0]>target || side[1]>target || side[2]>target || side[3]>target){
            return false;
        }
        else{
            side[0]+=matchsticks[i];
            bool b0=finder(target,side,matchsticks,i+1);
            if(b0==true){
                return true;
            }
            side[0]-=matchsticks[i];
            side[1]+=matchsticks[i];
            bool b1=finder(target,side,matchsticks,i+1);
            if(b1==true){
                return true;
            }
            side[1]-=matchsticks[i];
            side[2]+=matchsticks[i];
            bool b2=finder(target,side,matchsticks,i+1);
            if(b2==true){
                return true;
            }
            side[2]-=matchsticks[i];
            side[3]+=matchsticks[i];
            bool b3=finder(target,side,matchsticks,i+1);
            if(b3==true){
                return true;
            }
            side[3]-=matchsticks[i];
            return b1||b2||b3||b0;
        }
    }
    static bool compare(int a,int b){
        return a>b;
    }
    bool makesquare(vector<int>& matchsticks) {
        int sum=0;
        for(int i=0;i<matchsticks.size();i++){
            sum=sum+matchsticks[i];
        }
        if(sum%4!=0){return false;}
        sort(matchsticks.begin(),matchsticks.end(),compare);
        int target=sum/4;
        vector<int>side(4,0);
        return finder(target,side,matchsticks,0);
    }
};
