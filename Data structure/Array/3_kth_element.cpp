#include <iostream>
using namespace std;

int kth_ele(int arr[],int size,int ind ,int key)
{

    for(int i= 0;i<size;i++)
    {
        if(arr[i]==key)
        {
            cout<<i<<endl;
        }
    }
      
    return arr[ind];
}

int main()
{
    //driver code
    int arr[] = {2,4,5,67,8,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key =4;
    int ind =4;
    int k=kth_ele(arr,size,ind,key);
    cout<<"your ele  " <<k;

}