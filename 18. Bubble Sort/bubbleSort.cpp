#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // for increasing order
            // if (arr[j] <arr[j + 1]) //for decreasing order

            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printAns(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    // vector<int> arr{5, 4, 3, 2, 1};
    vector<int> arr{-5, 99, 11, 3, 17};

    bubbleSort(arr);
    printAns(arr);
    return 0;
}