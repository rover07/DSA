#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVectorOfVector(vector<vector<int>> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    cout << endl;
}
//
//
// custom comparator to sort by 1st index, i have also included for sorting over 0th index but commented it out.
bool mycomp1stIndex(vector<int> &a, vector<int> &b)
{
    // return a[0] > b[0]; //for 0th index sorting
    return a[1] > b[1]; // for 1st index sorting(descending)

    // return a[1] < b[1]; //for 1st index sorting(aescending)
}
// main fxn
int main()
{
    vector<vector<int>> v;
    int size;
    cout << "Enter size";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int a, b;
        cout << "Enter a and b" << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "Here are the values" << endl;
    // printing v of v without sorting
    printVectorOfVector(v, size);
    //
    //
    // Sorting by 0th index
    // sort(v.begin(), v.end());
    //
    // Sorting by 1st index
    cout << "Vector of vector after sorting" << endl;
    sort(v.begin(), v.end(), mycomp1stIndex);
    // printing v of v aftersorting via sort() function
    printVectorOfVector(v, size);

    return 0;
}