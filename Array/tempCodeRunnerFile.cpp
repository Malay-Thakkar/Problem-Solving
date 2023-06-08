#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;
int stepcount = 0;

int partition(int arr[], int low, int high)
{

    int pivot = arr[high];
    int i = (low - 1);
    stepcount += 2;

    for (int j = low; j <= high - 1; j++)
    {
        stepcount++;
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
            stepcount += 2;
        }
    }
    swap(arr[i + 1], arr[high]);
    stepcount++;
    return (i + 1);
}

int partition_r(int arr[], int low, int high)
{

    srand(time(NULL));
    int random = low + rand() % (high - low);
    swap(arr[random], arr[high]);
    stepcount += 3;
    return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
    stepcount++;
    if (low < high)
    {
        int pi = partition_r(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        stepcount += 3;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        stepcount++;
    }
}

int main()
{
    int no;
    cin >> no;
    int arr[no];
    for (int i = 0; i < no; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);

    cout <<"Your step count is: "<< stepcount;

    return 0;
}
