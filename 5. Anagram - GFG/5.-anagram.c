// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C


//Function is to check whether two strings are anagram of each other or not.
bool isAnagram(char a[], char b[]){
    
    // Your code here
    int size1=0;
    int size2=0;
    int s1=0;
    int s2=0;
    
    while(a[s1]!='\0'){
        size1++;
        s1++;
    }
    while(b[s2]!='\0'){
        size2++;
        s2++;
    }
    if(size1!=size2)return false;
    
    char arr[26]={0};
    for(int i=0;i<size1;i++){
        arr[a[i]-'a']++;
    }
    for(int i=0;i<size2;i++){
        arr[b[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0)
        return false;
    }
    return true;
    
    
    
}


// { Driver Code Starts.

int main() {
    
    int t;

    scanf("%d", &t);

    while(t--){
        char c[10000], d[10000];

        scanf("%s%s", &c, &d);

        if(isAnagram(c, d)) printf("YES\n");
        else  printf("NO\n");
    }

}
  // } Driver Code Ends