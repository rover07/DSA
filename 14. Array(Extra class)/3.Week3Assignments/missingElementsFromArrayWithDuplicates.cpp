#include <iostream>
using namespace std;

void missingElement(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int index = abs(arr[i]);  // using present element as index
        if (arr[index - 1] > 0)   //-1 because our array starts from 1 so we have to adjust it with 0 based indexing
            arr[index - 1] *= -1; // marking as done
    }

    // now getting the index of value which has positive value, positive because it was double checked due to it being duplicate
    // Yaha pe 3 appeared twice but was marked only once, making the duplicate remain as positive.
    // Now after marking all as (-ve), any positive remains, the positive+1= missing number==Our answer
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            cout << i + 1; //+1 because our array starts from 1
        // break;
    }

    // // print
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

int main()
{
    int arr[] = {1, 3, 5, 3, 4}; // 2 is missing
    int size = sizeof(arr) / sizeof(int);
    missingElement(arr, size);
    return 0;
}