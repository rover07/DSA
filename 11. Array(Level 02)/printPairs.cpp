// (10,10),(10,20),(10,30),(20,10)...upto 9 combinations

#include <iostream>
using namespace std;

void printPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "(" << arr[i] << " " << arr[j] << ")" << endl;
        }
    }
}

int main()
{
    int size = 3;
    int arr[] = {10, 20, 30};
    printPairs(arr, size);
    return 0;
}