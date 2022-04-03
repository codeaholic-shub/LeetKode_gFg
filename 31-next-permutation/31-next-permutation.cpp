class Solution {
public:
void nextPermutation(vector<int>& nums) {
//if there is single element
if(nums.size()==1)
return;

    //index1 store the least value index and we will travel by last element
    int index1;
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index1=i;
            break;
        }
    }
    
    //if index1 is not fill then just sort or reverse it because the numberis already big we can't find next big no
    if(index1<0)
        reverse(nums.begin(),nums.end());
    
    //else find next big no then index1 and store in index2
    else{
        int index2=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[index1]){
                index2=i;
                break;
            }
        }
        // just swap index1 and index
        swap(nums[index1],nums[index2]);
        //sort element from index1 to last no
        sort(nums.begin()+index1+1,nums.end());
    }
}
};