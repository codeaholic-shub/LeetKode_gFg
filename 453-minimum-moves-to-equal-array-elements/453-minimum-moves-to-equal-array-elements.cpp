class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNo=INT_MAX;
        for(int i=0;i<nums.size();i++){
            minNo=min(minNo,nums[i]);
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            cnt+=(nums[i]-minNo);
        }
        return cnt;
    }
};