// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        //code here
        int n = A.length();
        int m = B.length();
        
        int j=0;
        for(int i=0;i<m;i++){
            if(B[i]==A[j]){
                j++;
            }
        }
        return (j==n);
    }
};

// { Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans == true)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}  // } Driver Code Ends