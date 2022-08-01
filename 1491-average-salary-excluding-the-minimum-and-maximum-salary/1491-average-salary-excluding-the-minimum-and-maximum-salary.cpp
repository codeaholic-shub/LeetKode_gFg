class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double res = 0;
        for(int i=1;i<salary.size()-1;i++){
            res+=salary[i];
        }
        return res/(salary.size()-2);
    }
};