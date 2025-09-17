class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[int('z')-int('a')+1]={0};
        for(int i=0;i<sentence.size();i++){
            arr[int(sentence[i])-int('a')]++;
        }
        sort(arr,arr+('z'-'a'+1));
        if(arr[0]<=0){return false;}
        return true;
    }
};
