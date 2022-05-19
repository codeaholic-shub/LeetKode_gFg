class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int mod[k];
        memset(mod,0,sizeof(mod));
        int currSum=0;
        for(int i=0;i<n;i++){
            currSum+=nums[i];
            mod[((currSum)%k+k)%k]++;
        }
        int res=0;
        for(int i=0;i<k;i++){
            if(mod[i]>1)
                res+=(mod[i]*(mod[i]-1))/2;
        }
        res+=mod[0];
        return res;
    }
};