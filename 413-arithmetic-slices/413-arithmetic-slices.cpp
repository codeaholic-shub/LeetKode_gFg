class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3)return 0;
        int curr=0,ans=0,last_diff=nums[0]-nums[1],curr_diff=0;
        for(int i=1;i<n-1;i++){
            curr_diff=nums[i]-nums[i+1];
            if(curr_diff==last_diff){
                curr++;
            }
            else{
                last_diff=curr_diff;
                curr=0;
            }
            ans+=curr;
        }
        return ans;
    }
};