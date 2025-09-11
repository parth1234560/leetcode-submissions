class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int smallest=letters[0],low=0,high=letters.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(letters[mid]-target>0 && letters[mid]-target<smallest){
                smallest=letters[mid];
                high=mid-1;
            }
            else if(letters[mid]-target>0){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return smallest;
    }
};
