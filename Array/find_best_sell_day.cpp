#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int mx=-1,ans=0;
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<ans<<endl;
}