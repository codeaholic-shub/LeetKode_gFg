class Solution {
public:
    vector<int> partitionLabels(string s) {
        int maxi=0,prev=-1;
        unordered_map<int,int>mp;
        vector<int>res;
        
        int n = s.length();
        for(int i=0;i<n;i++){
            char ch = s[i];
            mp[ch]=i;
        }
        for(int i=0;i<s.length();i++){
            maxi=max(maxi,mp[s[i]]);
            if(maxi==i){
                res.push_back(maxi-prev);
                prev=maxi;
            }
        }
        return res;
    }
};