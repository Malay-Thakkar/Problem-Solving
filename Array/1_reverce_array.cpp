#include <iostream>
using namespace std;

int reverse_array(int arr[], int n)
{
    int size=n;
    cout<<&arr[0]<<"==>";
    cout<<arr[0]<<"==>";
    for (int i = 0; i <size / 2; i++)
    {
        int temp = arr[size-i-1];
        arr[size - i] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i <=size; i++)
    {
        cout << arr[i] << endl;
    }

    cout<<&arr[0]<<"==>";
    cout<<arr[0]<<"==>";
    return 0;
}

int main()
{
    int arr[] = {4,6,72,1,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int z = reverse_array(arr, n);
}

// another approch
//     void rvereseArray(int arr[], int start, int end)
// {
//     while (start < end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// } 