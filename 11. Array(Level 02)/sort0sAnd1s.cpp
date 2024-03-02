// 0,0,0,0,0,0,1,1,1.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void countZeroToOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            // zeroCount = zeroCount + 1;
            zeroCount++;
            // this works too
        }
        else
        {
            oneCount = oneCount + 1;
        }
    }
    cout << "Zero count is:" << zeroCount << endl;
    cout << "One Count is:" << oneCount << endl;

    // int i;
    // for (i = 0; i < zeroCount; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (; i < size; i++)
    // {
    //     arr[i] = 1;
    // }

    // Easy way
    int index = 0;
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    // zero=6
    // one=3
    int size = 9;
    countZeroToOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// 2 pointer approach Homework
// void sort(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; i < size; i++)
//         {

//             if (arr[i] < arr[j])
//             {

//                 swap(arr[i], arr[j]);
//             }
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
//     int size = 9;
//     sort(arr, size);
//     return 0;
// }
