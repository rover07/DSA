// // This is a program for dynamic array ie. Vector.

#include <iostream>
using namespace std;
// void func(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Array is:";
//         cout << arr[i] << endl;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int *arr = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter number:";
//         int data;
//         cin >> data;
//         arr[i] = data;
//     }

//     func(arr, n);
//     return 0;
// }

void fun(int arr[], int n)
{
    cout << "Array is:";
    for (int i = 0; i < n; i++)
    {
        cout << "The value at index" << i << " is:";
        cout << arr[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value:";
        cin >> arr[i];
    }
    fun(arr, n);
}