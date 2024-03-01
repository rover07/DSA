#include <iostream>
#include <vector>
using namespace std;

void printFun(vector<int> arr)
{
    cout << "printing via method 2:";
    for (auto it : arr)
    {
        cout << it << "  ";
    }
}
int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    printFun(arr);
    return 0;
}
