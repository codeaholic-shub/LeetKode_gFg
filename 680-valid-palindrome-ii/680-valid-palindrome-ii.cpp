class Solution {
public:
    bool checkPalin(string s,int low,int high){
        while(low<high){
        if(s[low]!=s[high]){
            return false;
        }
        low++;
        high--;
        }
    return true;
    }
    bool validPalindrome(string s) {
        int low=0,high=s.length()-1;
        while(low<high){
            if(s[low]!=s[high]){
                return checkPalin(s,low,high-1) || checkPalin(s,low+1,high);
            }
            low++;
            high--;
        }
        return true;
    }
};