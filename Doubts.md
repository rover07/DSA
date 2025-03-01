# Doubts and pending stuffs

### Doubt: why does this give output as 8 and 4: int main()?

### Ans:

{
    int size = 5;
    int *arr = new int[size];
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr);
    return 0;
}

Ans:

In your code, you are working with pointers and the `sizeof` operator in C++. Let's go through each line to understand why the output is `8` and `4`:

```cpp
#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int *arr = new int[size];
    cout << sizeof(arr) << endl;
    cout << sizeof(*arr);
    return 0;
}
```

### Explanation:

1. **`sizeof(arr)`**:

   - Here, `arr` is a pointer to an integer (`int *arr`), and it stores the address of the first element in the dynamically allocated array.
   - The `sizeof` operator returns the size of the data type of the expression.
   - Since `arr` is a pointer (usually `int*` on most systems), `sizeof(arr)` gives the size of a pointer, not the size of the array itself.
   - On most modern 64-bit systems, a pointer has a size of **8 bytes**, hence `sizeof(arr)` outputs `8`.
2. **`sizeof(*arr)`**:

   - The expression `*arr` dereferences the pointer, meaning it accesses the value stored at the memory location pointed to by `arr`.
   - Since `arr` is an `int*`, `*arr` is of type `int`.
   - The size of an `int` is typically **4 bytes** on most systems.
   - Therefore, `sizeof(*arr)` outputs `4`.

### Summary:

- `sizeof(arr)` gives the size of the pointer (8 bytes).
- `sizeof(*arr)` gives the size of an `int` (4 bytes).

### Output:

```
8
4
```

---



### Doubt 2: While calling arguments in function, why we use void function( int arr[][3]), why we only mention size of column and leave row empty

### Ans: When passing a 2D array to a function, we need to specify the column size (like `int arr[][3]`) because the compiler uses it to find each element's position in memory. We don’t need to specify the number of rows since it doesn’t affect how the compiler calculates where each element is stored. c*i+j logic where c is only importent, here: c=column no, i= ith row, j=jth column.

---
