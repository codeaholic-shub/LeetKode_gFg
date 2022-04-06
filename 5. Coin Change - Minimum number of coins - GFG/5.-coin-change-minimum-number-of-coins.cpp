// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Complete this function

class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.
    long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
    {
        // your code here
        int V = value;
        int m = numberOfCoins;
        
        int table[V+1];
        
        table[0]=0;
        for(int i=1;i<=V;i++)table[i]=INT_MAX;
        
        for(int i=1;i<=V;i++){
            for(int j=0;j<m;j++){
                if(coins[j]<=i){
                    int subRes = table[i-coins[j]];
                    if(subRes!=INT_MAX && subRes+1<table[i]){
                        table[i]=subRes+1;
                    }
                }
            }
        }
        if(table[V]==INT_MAX)return -1;
        else return table[V];
    }
};

// { Driver Code Starts.



int main() {
	
	//taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends