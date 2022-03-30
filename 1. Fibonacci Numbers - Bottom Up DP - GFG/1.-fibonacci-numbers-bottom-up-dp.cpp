// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <fstream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
// You need to complete this function
long long int memo[100000];

class Solution
{
    public:
    //Function to find the nth fibonacci number using bottom-up approach.
    long long int fib(int n){
        if(memo[n]==-1){
            long long int res;
            if(n==0 || n==1){
                return n;
            }
            else{
                res = fib(n-1)+fib(n-2);
            }
            memo[n]=res;
        }
        return memo[n];
    }
    long long findNthFibonacci(int number)
    {
        // Your Code Here
        memset(memo,-1,sizeof(memo));
        return fib(number);
    }
    
};

// { Driver Code Starts.

int main()
 {
    //taking testcases
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        //taking nth fibonacci 
        //to be found
        int number;
        cin>>number;
        
        //calling function findNthFibonacci()
        //and passing number as parameter
        Solution obj;
        cout<<obj.findNthFibonacci(number)<<endl;
    }
    
	return 0;
}
  // } Driver Code Ends