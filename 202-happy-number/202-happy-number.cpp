class Solution {
public:
    bool isHappy(int n) {
        if(n==7 || n==1)return true;
        int sum=n,x=n;
        while(sum>9){
            sum=0;
            while(x>0){
                int temp=x%10;
                sum+=temp*temp;
                x=x/10;
            }
            if(sum==1)
                return true;
            x=sum;
        }
        if(sum==7)return true;
        else return false;
    }
};