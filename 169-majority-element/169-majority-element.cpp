class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore Voting Algorithm
        
        int count=0,candidate=0;
        for(int num:nums){
            if(count==0){
                candidate=num;
            }
            if(candidate==num)count+=1;
            else count-=1;
        }
        return candidate;
    }
};