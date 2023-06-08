#include <iostream>
using namespace std;

int count = 0;

// int partition_t(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = (low - 1);
//     int j, t;
//     for (j = low; j <= high - 1; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;
//             t = arr[i];
//             arr[i] = arr[j];
//             arr[j] = t;
//         }
//     }
//     t = arr[i + 1];
//     arr[i + 1] = arr[high];
//     arr[high] = t;
//     return (i + 1);
// }
// void q_sort_t(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pi = partition_t(arr, low, high);
//         q_sort_t(arr, low, pi - 1);
//         q_sort_t(arr, pi + 1, high);
//     }
//}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    count++;
    int i = (low - 1);
    count++;
    int j, t;
    count++;
    for (j = low; j <= high - 1; j++)
    {
        count++;
        if (arr[j] <= pivot)
        {
            i++;
            count++;
            t = arr[i];
            count++;
            arr[i] = arr[j];
            count++;
            arr[j] = t;
            count++;
        }
    }
    t = arr[i + 1];
    count++;
    arr[i + 1] = arr[high];
    count++;
    arr[high] = t;
    count++;
    count++;
    return (i + 1);
}
void q_sort(int arr[], int low, int high)
{
    count++;
    if (low < high)
    {
        int pi = partition(arr, low, high);
        count++;
        q_sort(arr, low, pi - 1);
        count++;
        q_sort(arr, pi + 1, high);
        count++;
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
    q_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Step count = " << count;
    return 0;
}

