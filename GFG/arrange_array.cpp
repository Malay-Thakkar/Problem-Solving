//1st time solve withount any error
//Input:
//N = 5
//arr[] = {4,0,2,1,3}
//Output: 3 4 2 0 1
//Explanation: 
//arr[arr[0]] = arr[4] = 3.
//arr[arr[1]] = arr[0] = 4.
//and so on.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        // Your code here
        long long ans[n];
        for(int i=0;i<n;i++)
        {
            long long temp = arr[i];
            ans[i]=arr[temp];
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]=ans[i];
        }
        
        
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin>>t;
    while(t--){
        
        int n;
        //size of array
        cin>>n;
        long long A[n];
        
        //adding elements to the array
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        //calling arrange() function
        ob.arrange(A, n);
        
        //printing the elements 
        for(int i=0;i<n;i++){
            cout << A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
