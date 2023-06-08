#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n;i++)
    {
        for(int j=0 ;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    bool flag= false;
    cout<<"Enter Element which you want to find";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<i<<j<<endl;
                flag=true;
            }

        }
    }

    if(flag==true)
    {
        cout<<"found element";
    }
    else{
        cout<<"not found";
    }

}