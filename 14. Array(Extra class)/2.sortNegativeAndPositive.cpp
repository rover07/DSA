// 0,0,0,0,0,0,1,1,1.
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void countZeroToOne(vector<int> arr, int size)
{
    int j = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] < 0)
        {
            swap(arr[index], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        //
    }
}
int main()
{
    vector<int> arr = {23, -7, 12, -10, -11, 40, 60};

    int size = arr.size();
    countZeroToOne(arr, size);

    return 0;
}
//
//
//
// all trial and error stuffs i dont need right now
//
//
//
// {
//     // if (arr[left] > arr[right])
//     // {
//     //     swap(arr[left], arr[right]);
//     //     right--;
//     // }
//     // else
//     // {
//     //     left++;
//     // }
//     // for (int i = 0; i < size; i++)

//     if (arr[index] == arr[left])
//     {
//         index++;
//     }
//     if (arr[index] < arr[left])
//     {
//         swap(arr[index], arr[left]);
//         left++;
//         index++;
//     }
//     else if (arr[index] > arr[right])

//     {
//         swap(arr[index], arr[right]);
//         right--;
//     }
// }

// // for (int i = 0; i < size; i++)
// // {
// //     if (arr[i] > INT_MIN)
// //     {
// //         max = arr[i];
// //     }
// //     // else{
// //     //     swap(arr[i],max);
// //     // }
// // }