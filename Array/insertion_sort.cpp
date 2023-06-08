#include <iostream>
using namespace std;

int count=0;

int insertion_sort(int arr[],int n)
{
    int i, key, j;
    count++;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        count+=2;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            count+=2;
        }
        arr[j + 1] = key;
        count++;
    }
    return 0;
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
    insertion_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Step count = "<<count;
    return 0;
}
