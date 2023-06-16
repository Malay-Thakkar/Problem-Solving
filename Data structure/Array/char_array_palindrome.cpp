#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
              //char array must have at the end null char
    char arr[n+1];
    cin>>arr;
    cout<<arr<<endl;
    cout<<arr[3]<<endl;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            flag=0;
            break;
            
        }
    }

    if(flag == 1)
    {
        cout<<"Yor word is palindrome";
    }

    else
    {
        cout<<"your word is not palindrome";
    }
}