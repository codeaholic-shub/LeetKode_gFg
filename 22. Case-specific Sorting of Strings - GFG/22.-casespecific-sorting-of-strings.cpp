// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string res="";
        vector<char>s;
        vector<char>c;
        for(int i=0;i<n;i++){
            if(str[i]>=65 && str[i]<=90){
                c.push_back(str[i]);
            }
            else{
                s.push_back(str[i]);
            }
        }
        sort(c.begin(),c.end());
        sort(s.begin(),s.end());
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(str[i]>=65 && str[i]<=90){
                res+=c[c1];
                c1++;
            }
            else{
                res+=s[c2];
                c2++;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends