class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        // Decrypting the Morse Code
        vector<string>a={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        
        for(int i=0;i<words.size();i++){
            string tt = words[i];
            string temp="";
            for(int j=0;j<tt.length();j++){
                int t = tt[j]-'a';
                temp+=a[t];
            }
            s.insert(temp);
        }
        return s.size() ;
    }
};