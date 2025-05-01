#include <iostream>
#include <limits.h>

using namespace std;

// int minNo()
// {
// }
// int INT_MIN;
// int main()
// {

// cout << INT_MIN << endl;
// cout << INT_MAX;
// // minNo();

// // Question
// int arr[4]={3,22,68,0};
// int n=4;
// int minAns=MAX_INT;
// for(int i=0;i<4;i++)
// {
//     // way1
//     if(arr[i]<minAns)
//     {
//         minAns=arr[i];
//     }
// }
// cout<<"Smallest value is:"<<minAns;

// Question

void minInArray(int arr[], int n)
{
    int minAns = INT_MAX;
    for (int i = 0; i < 4; i++)
    {
        // // way1
        // if (arr[i] < minAns)
        // {
        //     minAns = arr[i];
        // }

        // way2
        minAns = min(arr[i], minAns);
    }
    cout << "Smallest value is:" << minAns;
}

int main()
{
    int arr[4] = {3, -22, 8, 11};
    int n = 4;
    minInArray(arr, n);

    return 0;
}