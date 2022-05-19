class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int found=haystack.find(needle);
        if(haystack=="" && needle=="")return 0;
        return found;
    }
};