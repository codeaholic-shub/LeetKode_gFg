class Solution {
public:
    bool isMatching(char a,char b){
        return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<char>str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                str.push(s[i]);
            else{
                if(str.empty()==true)return false;
                else if(isMatching(str.top(),s[i])==false)return false;
                else str.pop();
            }
        }
        return (str.empty()==true);
    }
};