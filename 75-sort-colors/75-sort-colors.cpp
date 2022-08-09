class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Dutch National Flag Alorithm
        
        
        int cnt0=0,cnt1=0,cnt2=0;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)cnt0++;
            if(nums[i]==1)cnt1++;
            if(nums[i]==2)cnt2++;
        }
        int i=0;
        while(cnt0!=0){
            nums[i]=0;
            i++;
            cnt0--;
        }
        while(cnt1!=0){
            nums[i]=1;
            i++;
            cnt1--;
        }
        while(cnt2!=0){
            nums[i]=2;
            i++;
            cnt2--;
        }
    
    }
};