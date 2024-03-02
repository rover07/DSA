#include <iostream>
#include <limits.h>
using namespace std;

void maxNo(int arr[], int size)
{
    int max = INT_MIN;
    // to take values in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value at index" << i << ":" << endl;
        cin >> arr[i];
    }

    // to find max
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > INT_MIN)
        {
            max = arr[i];
        }
    }
    cout << "The max value is:" << max;
}

int main()
{

    int size;
    cout << "Enter size of array:";
    cin >> size;
    int *arr = new int[size];

    maxNo(arr, size);
    return 0;
}