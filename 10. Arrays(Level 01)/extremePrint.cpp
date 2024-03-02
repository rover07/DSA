#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    // to take input in array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value:" << endl;
        cin >> arr[i];
    }
    // to print array
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
}
int main()
{

    int size;
    cout << "Enter size:";
    cin >> size;
    int *arr = new int[size];

    extremePrint(arr, size);

    return 0;
}
