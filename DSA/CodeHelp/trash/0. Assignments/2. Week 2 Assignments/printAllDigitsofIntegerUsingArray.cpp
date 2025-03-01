// This doesnt work ,try later

#include <iostream>
#include <vector>
using namespace std;
void printAllDigitsOfInteger(/* int arr[] */ vector<int> arr, int size, int num)
{
    // int ans=0;
    for (int i = 0; i < size; i++)
    {
        while (num > 0)
        {
            int digit = num % 10;
            arr.push_back(digit);
            num = num / 10;
        }
    }
    // reversing this using array
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    // int arr[3];
    // int size = 3;
    vector<int> arr;
    int size = arr.size();
    int num;
    cout << "Enter number";
    cin >> num;
    printAllDigitsOfInteger(arr, size, num);
    return 0;
}
