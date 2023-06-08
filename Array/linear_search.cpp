#include <iostream>
using namespace std;

int count = 0;
int linear_search(int array[], int key, int n)
{
    int flag = 0;
    count++;
    for (int i = 0; i < n; i++)
    {
        count++;
        if (array[i] == key)
        {
            count++;
            return i;
        }
        else
        {
            count++;
            flag = -1;
        }
    }

    if (flag == -1)
    {
        count++;
        cout << "Sorry, Element is Not found" << endl;
    }

    count++;
    return -1;
}
int main()
{
    int n, key;
    cout<<"Enter no of element: ";
    cin >> n;
    int array[n];
    count += 3;
    for (int i = 0; i < n; i++)
    {
        count += 3;
        int x = rand();
        array[i] = x;
    }
    cout<<array[0]<<endl;
    cout <<"Enter Key: ";
    cin >> key;
    linear_search(array, key, n);
    count += 3;
    cout << "Totel Steps Are: " << count << endl;
    cout << "time complexity worst case o(n) and best case o(1)" << endl;
}