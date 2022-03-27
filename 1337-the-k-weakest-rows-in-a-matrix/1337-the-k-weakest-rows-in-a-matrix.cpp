class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        int n = mat.size();
        for(int i=0;i<n;i++){
            int cnt = count(mat[i].begin(),mat[i].end(),1);
            s.insert({cnt,i});
        }
        vector<int>ans;
        for(auto x:s){
            if(k==0)break;
            ans.push_back(x.second);
            --k;
        }
        return ans;
    }
};