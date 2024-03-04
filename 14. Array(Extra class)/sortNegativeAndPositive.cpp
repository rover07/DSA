// 0,0,0,0,0,0,1,1,1.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void countZeroToOne(int arr[], int size)
{
    int negativeCount = 0;
    int positiveCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            // zeroCount = zeroCount + 1;
            negativeCount++;
            // this works too
        }
        else
        {
            positiveCount++;
        }
    }
    cout << "Negative count is:" << negativeCount << endl;
    cout << "Positive Count is:" << positiveCount << endl;

    int temp[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            for (int i = 0; i < size; i++)
            {
                temp[i] = arr[i];
            }
        }
    }
}

int main()
{
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
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
