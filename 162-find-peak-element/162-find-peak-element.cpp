class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int maxNo = INT_MIN;
       for(int i=0;i<nums.size();i++){
           maxNo = max(maxNo,nums[i]);
       }
       for(int i=0;i<nums.size();i++){
           if(maxNo==nums[i])
               return i;
}
        return 0;
    }
};