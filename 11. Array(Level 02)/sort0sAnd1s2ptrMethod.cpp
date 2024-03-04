#include <iostream>
#include <vector>
using namespace std;
void sortFxn(vector<int> arr, int size)
{
    int left = 0;
    int right = size - 1;
    int i = 0;
    // for (int i = 0; i < size; i++)
    // while (i < size) both "while" works
    while (left <= right)
    {

        // if (arr[i] == 0)
        // {
        //     // swap(arr[i], arr[left]); no x need to swap if the current index [i] has value 0, just increment
        //     left++;
        //     i++;
        // }
        // else if (arr[i] == 1)
        // {
        //     swap(arr[i], arr[right]);
        //     right--;
        // }

        // more simplified by me
        if (arr[left] == 1)
        {
            swap(arr[left], arr[right]);

            right--;
        }
        else
        {

            left++;
        }
    }
    // print wala loop
    // for (int i = 0; i < size; i++)
    for (auto value : arr)
    {
        cout << value << " ";
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0};
    int size = arr.size();
    sortFxn(arr, size);

    return 0;
}