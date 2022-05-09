class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        bool flag=true;
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-i-1])
                flag=false;
        }
        if(flag)return true;
        else return false;
    }
};