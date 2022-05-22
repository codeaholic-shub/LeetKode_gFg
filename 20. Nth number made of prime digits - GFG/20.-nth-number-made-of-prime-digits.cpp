// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        //code here
        char array[] = {'7','2','3','5'};
        string ans="";
        while(n>0){
            ans+=array[n%4];
            if(n%4==0)n=n/4-1;
            else n/=4;
        }
        reverse(ans.begin(),ans.end());
        int num = stoi(ans);
        return num;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";   
    }
}
  // } Driver Code Ends