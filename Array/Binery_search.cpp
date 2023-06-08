#include <iostream>
using namespace std;

int count=0;
int binery_search(int array[], int n, int key)
{
    int s = 0, e = n, mid;
    while (s <= e)
    {
        count++;
        mid = (s + e) / 2;
        if (array[mid] == key)
        {
            count++;
            return mid;
        }

        else if (array[mid] > key)
        {
            count++;
            e = mid - 1;
        }

        else
        {
            count++;
            s = mid + 1;
        }
    }
     return -1;
}
int main()
{
    int n, key;
    cin >> n;
    int array[n];
    count+=3;
    for (int i = 0; i < n; i++)
    {
        count++;
        int x = rand();
        array[i] = x;
    }

    cout<< array[0]<<endl;//for best case

    cout << "Enter Key: ";
    cin >> key;
    binery_search(array, n, key);
    count+=4;
    cout<< count<<endl;
    cout<<"Time complexity of binary search = O(log n base 2) and Ω(1)";
}