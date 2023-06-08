#include <iostream>
using namespace std;

int count=0;

void selection_sort(int arr[],int n)
{
    count++;
    for (int i = 0; i < n - 1; i++)
    {
        count++;
        for (int j = i + 1; j < n; j++)
        {
            count++;
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count+=3;
            }
        }
    }
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
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Step count = "<<count;
    return 0;
}
