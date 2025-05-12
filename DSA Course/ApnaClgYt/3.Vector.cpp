// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> vec(4, 1);

//   for (int val : vec)
//   {
//     cout << val;
//   }

//   cout << vec[0];
//   return 0;
// }

// // // vector Functions
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//   vector<int> vec(4, 1); // Creation here is compile Time

//   cout << "Size: " << vec.size() << endl;
//   // pushed in the back

//   vec.push_back(2); // Values pushed during Runtime thus making it dynamic.
//   vec.push_back(4);
//   // removed from the back
//   cout << "Size after push back: " << vec.size() << endl;

//   vec.pop_back();
//   cout << "Size after pop back: " << vec.size() << endl;

//   cout << "Value at front: " << vec.front() << endl;
//   cout << "Value at back: " << vec.back() << endl;
//   cout << "Value at index 4: " << vec.at(4) << endl;
//   cout << "Size" << vec.size() << endl;
//   cout << "Capacity" << vec.capacity() << endl;
//   // for (auto val : vec)
//   // {

//   //   cout << val << endl;
//   // }

//   return 0;
// }

// // // Subarray
// #include <iostream>

// using namespace std;

// int main()
// {
//   int n = 5;
//   int arr[5] = {1, 2, 3, 4, 5};
//   for (int start = 0; start < n; start++)
//   {
//     for (int end = start; end < n; end++)
//     {
//       for (int i = start; i <= end; i++)
//       {
//         cout << arr[i];
//       }
//       cout << " ";
//     }
//     cout << endl;
//   }

//   return 0;
// }

// // // Subarray :More Optimised
// #include <iostream>

// using namespace std;

// int main()
// {
//   int n = 5;
//   int arr[5] = {1, 2, 3, 4, 5};
//    int maxSum=INT_MIN;
//
//   for (int start = 0; start < n; start++)
//   {
//     int currSum = 0;
//     for (int end = start; end < n; end++)
//     {
//       currSum += arr[end];
//        maxSum= max(currSum, maxSum);
//     }
//   }

//   return 0;
// }

// // // // Subarray using Kadane Algorithm

int main()
{
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  int size = nums.size();
  int currSum = 0, maxSum = INT_MIN;

  for (int val : nums)
  {
    currSum += val;
    maxSum = max(currSum, maxSum);
    if (currSum < 0)
    {
      currSum = 0;
    }
  }

  return 0;
}
