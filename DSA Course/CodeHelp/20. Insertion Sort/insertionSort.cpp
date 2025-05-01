#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int size = arr.size();

    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insertionSort(arr);
    printAns(arr);
    return 0;
}