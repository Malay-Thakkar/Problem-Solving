#include <iostream>
using namespace std;

int count=0;

void bubble_sort(int arr[],int n)
{
        int iter = 1;
        count++;

    for(int i=1;i<=n-1;i++)
    {
        count++;
         for(int i=0;i<n-iter;i++)
        {
            count++;
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                count+=3;
            }
        }
    }
    // while (iter <= n - 1)
    // {
    //     for(int i=0;i<n-iter;i++)
    //     {
    //         if(arr[i]>arr[i+1])
    //         {
    //             int temp = arr[i];
    //             arr[i]=arr[i+1];
    //             arr[i+1]=temp;
    //         }
    //     }
    //     iter++;
    // }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout<<endl;
    cout<<"your Step count = "<<count;

    return 0;
}
