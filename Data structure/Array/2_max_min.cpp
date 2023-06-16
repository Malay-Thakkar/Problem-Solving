#include <iostream>
using namespace std;

int max_min(int arr[],int size)
{
    int max=arr[0];
    int min=arr[0];
    for(int i= 0;i<size;i++)
    {
        if(max<arr[i])
        {
            max= arr[i];
        }

        else if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"max="<<max<<"min"<<min;
    return 0;
}

int main()
{
    //driver code
    int arr[] = {2,4,5,67,8,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    max_min(arr,size);

}