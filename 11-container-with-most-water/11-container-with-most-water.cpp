class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int maxArr=0,currArr=0;
        
        while(l<r){
            currArr=abs(l-r)*min(height[l],height[r]);
            if(maxArr<currArr)maxArr=currArr;
            if(height[l]<height[r])l++;
            else r--;
        }
        return maxArr;
    }
};