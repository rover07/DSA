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
    cout << "One Count is:" << oneCount;
}

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1};
    // zero=8
    // one=9
    int size = 17;
    countZeroToOne(arr, size);
    return 0;
}