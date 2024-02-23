#include <iostream>
using namespace std;
// My code
//  int arr[] = {1, 2, 3, 4, 5};
//  int num = 5;
//  for (int i = 0; i < num / 2; i++)
//  {
//      swap(arr[i], arr[num - (i + 1)]);
//  }
//  for (int i = 0; i < num; i++)
//  {
//      cout << "Array at index" << i << "is:" << arr[i] << endl;
//  }

// Babbars code
// Array with even size
void reverseArray(int arr[], int size)
{
    // int left = 0;
    // int right = size - 1;
    // By using while loop
    //  while (left < right)
    //  {
    //      swap(arr[left], arr[right]);
    //      left++;
    //      right--;
    //  }
    //  for (int i = 0; i < size; i++)
    //  {
    //      cout << arr[i] << endl;
    //  }

    // Using for loop
    // {
    //     for (int left=0; right=size-1; left<right; left++; right--)
    //     {
    //         swap(arr[left], arr[right]);
    //     }
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout << arr[i] << endl;
    //     }
    // }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    reverseArray(arr, size);
    return 0;
}