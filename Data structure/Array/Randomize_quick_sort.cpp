#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

int count = 0;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivote = arr[(low + high)/ 2];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivote)
        {
            i++;
        }
        while (arr[j] >= pivote)
        {
            j++;
        }

        if (i < j)
        {
            swap(arr[i],arr[j] );
        }

        swap(arr[j], arr[i]);
    }
    return j;
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
