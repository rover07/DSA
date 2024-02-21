#include <iostream>
using namespace std;
void solve(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << "  ";
    // }
}

// to return linear search
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    // if uppar wala nahi chala then theres no return there which means niche wala will not be skipped and the following false part will be returned.
    // Return marks the end of function!
    return false;
}

int main()
{
    int arr[5];
    int size = 5;
    int target;
    solve(arr, size);
    cout << "Enter target:";
    cin >> target;
    int ans = linearSearch(arr, size, target);
    if (ans == true) //We can use 1 and o for true and false respectively too/
    {
        cout << "Target Found!";
    }
    else
    {
        cout << "Target not found!!!!";
    }
    return 0;
}