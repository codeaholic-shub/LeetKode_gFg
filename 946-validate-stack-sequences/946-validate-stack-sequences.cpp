class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i=0,j=0;
        for(int x:pushed){
            pushed[i++]=x;
            //check if the current pushed element mathced with sequence or not
            while(i>0 && pushed[i-1]==popped[j]){
                --i;
                ++j;
            }
            
        }
        // lastly the stack will empty
        return i==0;
    }
};