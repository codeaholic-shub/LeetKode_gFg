// { Driver Code Starts
// C++ program for Naive Pattern 
// Searching algorithm 
#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if the given pattern exists in the given string or not.
    bool search(string pat, string txt) 
    { 
    	
    	// Your code here
    	int m = pat.length();
    	int n = txt.length();
    	
    	for(int i=0;i<=n-m;i++){
    	    int j;
    	    for(j=0;j<m;j++)
    	    if(txt[i+j]!=pat[j])
    	    break;
    	    
    	if(j==pat.length())return 1;
    	}
    	return 0;
    }
};


// { Driver Code Starts.

// Driver Code 
int main() 
{ 
	
	int t;
	cin >> t;
	
	while(t--){
	    string s, p;
	    cin >> s >> p;
	    Solution obj;
	    if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
	}
	
	return 0; 
}
  // } Driver Code Ends