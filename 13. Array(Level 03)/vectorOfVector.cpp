#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 1st way
    // vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //
    //  2nd way
    // vector<vector<int>> arr(3, vector<int>(4));
    //
    // pushing data in 2Dvector
    //

    // vector<vector<int>> arr;
    // //
    // // vectors to push
    // vector<int> a{4, 5, 6};
    // vector<int> b{7, 8, 9};

    // // way 1
    // arr.push_back({1, 2, 3, 4});
    // // way 2
    // arr.push_back(a);
    // arr.push_back(b);
    //
    //
    //
    //
    // vector<vector<int>> arr(3, vector<int>(5, 0));
    //
    // or
    //
    int row = 3;
    int cols = 5;
    vector<vector<int>> arr(row, vector<int>(cols, 0));

    for (int i = 0; i < arr.size(); i++)
    {
        // for (int j = 0; j < arr[0].size(); j++)
        for (int j = 0; j < arr[i].size(); j++)

        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}