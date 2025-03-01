#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = 5;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Values";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
    }
    cout << "The sum of array is:" << sum;
    return 0;
}