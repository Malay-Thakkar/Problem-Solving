#include <iostream>
using namespace std;

int stepcount=0;

void countSort(int array[], int size)
{

    int output[10];
    int count[10];
    int max = array[0];
    stepcount+=3;

    for (int i = 1; i < size; i++)          // Find the largest element of the array
    {
        stepcount++;
        if (array[i] > max)
        {
            max = array[i];
            stepcount++;
        }    
    }

    for (int i = 0; i <= max; ++i)         // Initialize count array with all zeros.
    { 
        count[i] = 0;
        stepcount++;
    }

    for (int i = 0; i < size; i++)        // Store the count of each element
    {
        count[array[i]]++;
        stepcount++;
    }

    for (int i = 1; i <= max; i++)        // Store the cummulative count of each array
    {
        count[i] += count[i - 1];
        stepcount++;
    }

    for (int i = size - 1; i >= 0; i--)  // Find the index of each element of the original array in count array, and
    {                                      // place the elements in output array
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
        stepcount+=2;
    }

    for (int i = 0; i < size; i++)   // Copy the sorted elements into original array
    {
        array[i] = output[i];
        stepcount++;
    }
}

void printArray(int array[], int size)     // Function to print an array
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "Your Step count: "<<stepcount;
}

int main()
{
    int no;
    cin>>no;
    int array[no];
    for (int i = 0; i <no; i++)
        {
            cin >> array[i];
        }
    int n = sizeof(array) / sizeof(array[0]);
    countSort(array, n);
    printArray(array, n);
}