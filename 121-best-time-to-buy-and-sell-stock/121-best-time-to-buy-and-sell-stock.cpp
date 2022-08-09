class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;
        int curr_min = prices[0];
        for(int i=0;i<prices.size();i++){
            curr_min = min(curr_min,prices[i]);
            ans=max(ans,prices[i]-curr_min);
        }
        return ans;
    }
};