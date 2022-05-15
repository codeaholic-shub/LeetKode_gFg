class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0=0,cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)cnt0++;
            if(nums[i]==1)cnt1++;
            if(nums[i]==2)cnt2++;
        }
       
       int j=0;
        while(cnt0!=0){
            nums[j]=0;
            cnt0--;
            j++;
        }
        while(cnt1!=0){
            nums[j]=1;
            cnt1--;
            j++;
        }
        while(cnt2!=0){
           nums[j]=2;
            cnt2--;
            j++;
        }
      
    }
};