#include <iostream>
using namespace std;

// // // // // static variabie in function
// void counter()
// {
//   static int count = 0; // This will be created and initialized only once
//   count++;
//   cout << "Count is:" << count << endl;
// };

// int main()
// {
//   counter();
//   counter();
//   counter();
//   return 0;
// }

//
//
//
// // // // // static variable in Class

class Example
{
public:
  //
  // static const int x = 0; // to initialize static variable here in CLASS, i have to make it "const" too.
  //
  static int x;
  //
  // // Without const, i can only define here and initialize outside of class using ::
};

// // To initialize without const keyword, we have to initialize the variable outside class.
// // We are doing this below
int Example::x = 0; // This is initialization here, which means "x" which belongs to class "Example" is initialized.
// // Now "x", is a variable of class and not for that particular object ie. As a part of class, it is shared by objects of that class.
int main()
{
  Example eg1;
  Example eg2;
  Example eg3;

  cout << eg1.x++ << endl; // 0
  cout << eg2.x++ << endl; // 1
  cout << eg3.x++ << endl; // 2
  return 0;
}
