#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 5, 6};
    int ans = binary_search(arr.begin(), arr.end(), 4);
    // gives binary value 0 or 1
    cout << "Binary search" << ans << endl;
    auto firstOccurrence = lower_bound(arr.begin(), arr.end(), 4);
    cout << "First Occurrence " << firstOccurrence - arr.begin() << endl;
    auto lastOccurrence = upper_bound(arr.begin(), arr.end(), 4);
    cout << "Last Occurrence " << lastOccurrence - arr.begin() << endl;

    return 0;
}