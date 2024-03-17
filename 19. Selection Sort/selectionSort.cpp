#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex]) // aescending
            // if (arr[j] > arr[minIndex]) // descending

            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selectionSort(arr);
    printAns(arr);
    return 0;
}