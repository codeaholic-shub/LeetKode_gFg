class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7)return true;
        if(n<10)return false;
        int sum=n,temp=0,x=n;
        while(sum>9){
            sum=0;
            while(x>0){
                temp=x%10;
                sum+=(temp*temp);
                x/=10;
            }
            if(sum==1)return true;
        x=sum;
        }
        if(sum==7)return true;
        else return false;
    }
};