#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> arr;
    arr.push_back('a');
    arr.push_back('b');
    arr.push_back('c');
    arr.push_back('d');

    cout << arr[arr.size() - 1] << endl;
    cout << arr.back() << endl;
    cout << arr.front() << endl;
    return 0;
}