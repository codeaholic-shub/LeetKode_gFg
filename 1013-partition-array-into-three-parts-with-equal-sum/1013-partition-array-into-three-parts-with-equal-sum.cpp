class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = accumulate(arr.begin(),arr.end(),0);
        int count = 0 ;
        int parts=0;
        if(sum%3!=0)return false;
        else{
        for(int i=0;i<arr.size();i++){
            
            parts+=arr[i];
            if(parts==sum/3){
                count++;
                parts=0;
            }
        }
        return count>=3;
        }
    }
};