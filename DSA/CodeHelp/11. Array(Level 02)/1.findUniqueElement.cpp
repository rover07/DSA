// every element occurs twice except one

#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> arr)
{
    int ans = 0;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}

int main()
{

    vector<int> arr{2, 1, 2, 1, 3, 4, 4, 5, 6, 6, 5};
    fun(arr);
    return 0;
}
