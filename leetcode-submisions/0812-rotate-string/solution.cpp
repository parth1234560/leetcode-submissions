class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1=s.size();
        int n2=goal.size();
        if(n1!=n2){return false;}
        string temp=s+s;

        if(temp.find(goal)==string::npos){
            return false;
        }
        else{
            return true;
        }
    }
};
