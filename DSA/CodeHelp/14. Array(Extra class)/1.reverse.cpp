#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int size = 4;

    // Reverse the entire array
    reverse(arr, arr + size);

    // Print the reversed array
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
