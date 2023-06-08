#include <iostream>
using namespace std;

int count;

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    count += 3;
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i];
        count++;
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = arr[q + 1 + j];
        count++;
    }
    int i=0, j=0, k=p;
    count++;
    while (i < n1 && j < n2)
    {
        count++;
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
            count+=2;
        }
        else
        {
            arr[k] = M[j];
            j++;
            count+=2;
        }
        k++;
        count++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
        count+=3;
    }
    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
        count+=3;
    }
}
void mergeSort(int arr[], int l, int r)
{
    count++;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
        count+=4;
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

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Step count = "<<count;
    return 0;
}
