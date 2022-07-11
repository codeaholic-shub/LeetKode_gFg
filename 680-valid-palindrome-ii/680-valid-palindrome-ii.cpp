class Solution {
public:
    bool checkPalin(string s,int low,int high){
        while(low<high){
            if(s[low]!=s[high])
                return false;
            low++;
            high--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length()-1;
        int low = 0,high = n;
        while(low<high){
            if(s[low]!=s[high])
                return checkPalin(s,low+1,high) || checkPalin(s,low,high-1);
            low++;
            high--;
        }
        return true;
    }
};