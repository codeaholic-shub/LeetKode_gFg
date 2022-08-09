class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_so_far=0;
        int max_so_far=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            curr_so_far+=nums[i];
            if(max_so_far<curr_so_far){
                max_so_far=curr_so_far;
            }
            if(curr_so_far<0){
                curr_so_far=0;
            }
        }
        return max_so_far;
    }
};