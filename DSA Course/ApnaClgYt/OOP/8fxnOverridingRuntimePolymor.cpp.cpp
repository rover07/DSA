// // // Runtime Poly: Function Overriding
#include <iostream>

using namespace std;

class Parent
{
public:
  void show()
  {
    cout << "Parent class show..\n";
  }
};
class Child : public Parent
{
public:
  void shwow()
  {
    cout << "Child class show..\n";
  }
};

int main()
{
  Child c1;
  c1.show();
  // Which function to call is not known by compiler and calling of that function doesnt happen in compile time. It is decided during Runtime.
  return 0;
}
