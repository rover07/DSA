// 12. Vector STL in C++
#include <iostream>
#include <vector>
using namespace std;
// // 1. Dynamic Array
int main()
{
    int size = 5;
    int *arr = new int[size];
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr);
    return 0;
}

// // 2. print Vector by method 2

// void printFun(vector<int> arr)
// {
//     cout << "printing via method 2:";
//     // for (auto ans : arr)
//     // {
//     //     cout << ans << endl;
//     // }
//     int endPt = arr.size();
//     cout << arr.size() << endl;
//     cout << endPt;
// }
// int main()
// {
//     vector<int> arr;
//     arr.push_back(10);
//     arr.push_back(20);
//     arr.push_back(30);
//     arr.push_back(40);

//     printFun(arr);
//     return 0;
// }
