// if {10,20,30,40}
//  then after shifting we get {40,10,20,30}

#include <iostream>
using namespace std;

void fun(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {

        arr[i] = arr[i - 1];
        // if (i == 0)
        // {
        //     arr[i] = temp;
        // }
    }

    arr[0] = temp;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    } 
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = 4;
    fun(arr, size);

    return 0;
}