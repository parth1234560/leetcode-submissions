class Solution {
public:
    bool isValid(string s) {
        stack<int> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                a.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(a.empty()||a.top()!='('){
                        return false;
                    }
                    else{
                        a.pop();
                    }
                }
                if(s[i]==']'){
                    if(a.empty()||a.top()!='['){
                        return false;
                    }
                    else{
                        a.pop();
                    }
                }
                if(s[i]=='}'){
                    if(a.empty()||a.top()!='{'){
                        return false;
                    }
                    else{
                        a.pop();
                    }
                }
            }
        }
        if(a.size()==0){
        return true;
        }
        else{
            return false;
        }
    }
};
