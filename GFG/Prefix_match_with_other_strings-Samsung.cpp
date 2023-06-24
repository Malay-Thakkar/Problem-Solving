---------- BRUTE FORCE----------- 

 

COMPLEXITY: 
Time Complexity: O(n*k)
Space Complexity: O(k)

 

APPROACH:

-> We need to count the number of strings in array 'a[]' whose prefix of length 'k' matches with the prefix of length 'k' in string 's'. For this purpose, first, we need to check if the length of 's' is greater than or equal to 'k'. If the length is less than 'k', there won't be any prefix of length 'k', and the answer will be 0.
-> Iterate through the array of strings.
-> Again, check if the length of the string is greater than or equal to 'k'. If not, continue; otherwise, check if its prefix of length 'k' is equal to the given string's prefix of length 'k'. If yes, increase the count.
-> Return the answer.

 

SOLUTION:
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        if(str.size()<k)return 0;
        string x=str.substr(0,k);
        int i,cnt=0;
        for(i=0;i<n;i++){
            if(arr[i].size()<k)continue;
            string temp=arr[i].substr(0,k);
            if(x==temp)cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
