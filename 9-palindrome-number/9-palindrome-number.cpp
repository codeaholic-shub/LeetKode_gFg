class Solution {
public:
    bool isPalindrome(int x) {
      string s = to_string(x);
      bool flag=true;
      for(int i=0;i<s.length()/2;i++){
          if(s[i]!=s[s.length()-1-i])
              flag=false;
      }
        if(flag)return true;
        else return false;
    }
};