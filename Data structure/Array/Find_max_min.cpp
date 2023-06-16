#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 7, 2, 0, 9};
    int max_1 = arr[0], min_1 = arr[0],h=0,x,y;
    for (int i = 0; i < 5; i++)
    {
        x=max(h,arr[i]);
        y=min(h,arr[i]);

      
        if (arr[i] > max_1)
        {
            max_1 = arr[i];
            cout << max_1;
        }
        else if (arr[i] < min_1)
        {
            min_1 = arr[i];
            cout << min_1;
        }
    }
    cout<<endl;
    cout<<"using inbilt function"<<endl;
    cout<<x<<endl;
    cout<<y<< endl;

    cout << "maximum Element: " << max_1 << endl;
    cout << "minimum Element: " << min_1 << endl;
}