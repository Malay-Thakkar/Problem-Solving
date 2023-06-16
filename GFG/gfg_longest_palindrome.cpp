#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestPalin (string s) {
        //3 approch are there
        //  1) bruteforce T.C=N^3 ==> two for loop and chack palindrom
        //  2) using Dynamic programing T.C=N^2 S.P=N
        //  3) answer T.C=N^2   ***ANSWER****
        
        //initilization
        
        int n=s.size();
        int start=0,end=0,maxl=1;
        
        //for odd length string
           for(int i=0;i<n;i++)
        {
            int l=i,r=i;
            while(l>=0 && r<n)
            {
                if(s[l]!=s[r])
                {
                    break;
                }
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl)
            {
                maxl=len;
                start=l+1;
                end=r-1;
            }
        }
        
        //for Even length string
          for(int i=0;i<n;i++)
        {
            int l=i,r=i+1;
            while(l>=0 && r<n)
            {
                if(s[l]!=s[r])
                {
                    break;
                }
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>maxl)
            {
                maxl=len;
                start=l+1;
                end=r-1;
            }
        }
        
        return s.substr(start,maxl);
        
    }
};

//Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// Driver Code Ends
