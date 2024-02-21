#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = 5;
    int target;
    bool flag = 0; // 0=not found , 1=found

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number:";
        cin >> arr[i];
    }
    cout << "Enter target:";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Target found!";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}