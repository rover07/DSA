// #include <iostream>

// using namespace std;

// int main()
// {
//   int a = 10;
//   int *ptr = &a;
//   int *ptr2 = ptr;

//   cout << &a << endl;   // address of "a"
//   cout << ptr << endl;  // address of "a"
//   cout << &ptr << endl; // address of "prt"
//   return 0;
// }

// // // Pointer to pointer
// #include <iostream>

// using namespace std;

// int main()
// {
//   int a = 10;
//   int *ptr = &a;
//   int **ptr2 = &ptr; // int* is the datatype/type of the pointer we are trying to point, and the 2nd * means creation of pointer

//   cout << &a << endl;   // address of "a"
//   cout << ptr << endl;  // address of "a"
//   cout << &ptr << endl; // address of "ptr"
//   cout << ptr2;         // "ptr" which is holding address of another pointer "ptr"

//   return 0;
// }

// // // // Dereferencing
// #include <iostream>

// using namespace std;

// int main()
// {
//   int a = 10;
//   int *ptr = &a;
//   int **ptr2 = &ptr;

//   cout << *(&a) << endl;    // 10
//   cout << *(ptr) << endl;   // 10;
//   cout << *ptr2 << endl;    // ptr2 has value as address of ptr, so finally we get value stored in ptr
//   cout << *(&ptr2) << endl; // value at ptr
//   // // 2 times Dereferencing
//   cout << **ptr2 << endl; // 10 // ptr2 has value of address of ptr, and ptr has value as address of "a", so we get value of "a" finally.
//   return 0;
// }

// // // // NULL Pointer
// #include <iostream>

// using namespace std;

// int main()
// {
//   // // // Garbage value present
//   // int *ptr;
//   // cout << ptr;

//   // // // NULL Pointer which means memory address is empty
//   // // Null pointer cann be dereferenced
//   int *ptr = NULL;
//   cout << ptr;
//   return 0;
// }

// // // // Pass by reference using Pointers
// #include <iostream>

// using namespace std;

// void change(int *ptr)
// {
//   // We are defererencing ptr as we wamt to change value not address
//   *ptr = 20;
// }
// int main()
// {
//   int a = 10;
//   change(&a);
//   cout << "Final Value of a " << a;
//   return 0;
// }

// // // // Array Pointers
// #include <iostream>

// using namespace std;

// int main()
// {
//   int arr[] = {1, 2, 3};
//   cout << *arr; // dereferencing arr pointer => 1

//   // // changing the value stored in ptr pointer is possible
//   int a = 10, b = 20;
//   int *ptr = a;
//   ptr = b;

//   // // The same is not possible in array as it is a constant pointer.
//   int c = 30;
//   arr = &c; // Error: expression must be a modifiable lvalueC
//   return 0;
// }

// // // Pointer Arithmetic
#include <iostream>

using namespace std;

int main()
{
  // // The type of pointer here is integer, so ++ -> +1 will make addition +4 bits
  // int a = 10;
  // int *ptr = &a;
  // cout << ptr << endl;
  // cout << ++ptr << endl;
  // cout << ++ptr << endl;
  // cout << ++ptr << endl;
  // cout << --ptr << endl;
  // // Outputs: 0x7ffe1fca2a6c,  0x7ffe1fca2a70,  0x7ffe1fca2a74, 0x7ffe1fca2a78 0x7ffe1fca2a74

  // cout << ptr + 4 << endl; // +4 -> 16 bytes added// 0x7ffe48c126a4%
  // cout << ptr + 2;         // 0x7ffcbbbb754c%

  // // // With Arrarys
  // int arr[] = {1, 2, 3, 4};
  // cout << *arr << endl;       // 1
  // cout << *(arr + 1) << endl; // 2

  // // // // Subtract Ptr
  // int a = 10;
  // int *ptr1;
  // int *ptr2 = ptr1 + 2;

  // cout << ptr1 << endl;
  // cout << ptr2 << endl;
  // cout << ptr2 - ptr1; // 2 Bytes

  // // // // Comparison
  int a = 10;
  int *ptr1;
  int *ptr2;

  cout << ptr1 << endl;           // Smaller: 0x7b19cbc7aa50
  cout << ptr2 << endl;           // Bigger: 0x7ffff7df9d28
  cout << (ptr2 > ptr1) << endl;  // 1 -> True
  cout << (ptr2 < ptr1) << endl;  // 0 -> False
  cout << (ptr2 == ptr1) << endl; // 0 -> False
  cout << (ptr2 != ptr1);         // 1 -> True
  return 0;
}
