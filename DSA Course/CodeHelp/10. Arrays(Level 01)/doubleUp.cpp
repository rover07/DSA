#include <iostream>
using namespace std;
int main()
{
    // problem1
    int arr[10];
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter values:";
        cin >> arr[i];
    }
    // Doubling values
    for (int i = 0; i < n; i++)
    {
        arr[i] = 2 * arr[i];
    }
    // Printing separate values
    for (int i = 0; i < n; i++)
    {
        cout << "Doubled values:" << arr[i] << endl;
    }

    return 0;
}