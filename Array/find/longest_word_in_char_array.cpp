#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    cin.ignore();

    char array[size + 1];

    cin.getline(array, size);
    cin.ignore();

    int curr_length = 0, max_length = 0;
    int max_start = 0;
    int i = 0;
    while (1)
    {
        if (array[i] == ' ' || array[i] == '\0')
        {   
            if (curr_length > max_length)
            {
                max_length = curr_length;
            }
            curr_length = 0;
        }
        else
        {
            curr_length++;
        }
        if (array[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << "Maximum Length : " << max_length << endl;
    cout << "Word is : ";
    for (int i = 0; i < max_length; i++)
    {
        cout << array[i + max_start];
    }
    return 0;
}