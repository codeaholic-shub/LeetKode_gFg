class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //using map approach
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int duplicate=0;
        for(auto x:mp){
            if(x.second>1){
                duplicate=x.first;
            }
        }
        return duplicate;
    }
};