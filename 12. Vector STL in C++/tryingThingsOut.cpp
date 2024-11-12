#include <iostream>
#include <vector>
using namespace std;
int main()

{
    vector<int> arr;
    cout << (sizeof(arr) / sizeof(int)) << endl;
    cout << (sizeof(arr)) << endl;
    cout << (sizeof(int));

    return 0;
}
