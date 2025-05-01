#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printAns(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool mycomp(int &a, int &b)
{
    // return a < b; // Sorts in increasing order. jaha pe bhi a < b rahega .
    return a > b;
}

int main()
{

    // vector<int> arr{5, 4, 3, 2, 1};
    vector<int> arr{-5, 99, 11, 3, 17};

    // using custom comparator
    sort(arr.begin(), arr.end(), mycomp);
    printAns(arr);
    return 0;
}