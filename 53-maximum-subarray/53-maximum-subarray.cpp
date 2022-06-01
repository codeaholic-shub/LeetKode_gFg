class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int meh=0,msf=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            meh+=nums[i];
            if(msf<meh){
                msf=meh;
            }
            if(meh<0){
                meh=0;
            }
        }
        return msf;
    }
};