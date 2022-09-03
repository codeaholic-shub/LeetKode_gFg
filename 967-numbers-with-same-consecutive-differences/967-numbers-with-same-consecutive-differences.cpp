class Solution {
public:
    void countNumber(int idx,vector<int>&ans,int n,int k,int val){
        if(idx==n){
            ans.push_back(val);
            return ;
        }
        for(int i=0;i<10;i++){
            int x = val%10;
            if(abs(x-i)==k)
                countNumber(idx+1,ans,n,k,val*10+i);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int>ans;
        for(int i=1;i<10;i++)
            countNumber(0,ans,n-1,k,i);
        return ans;
    }
};