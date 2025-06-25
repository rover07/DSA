// // // Runtime Poly: Virtual Function
#include <iostream>

using namespace std;

class Parent
{
public:
  // // We have to compulsory redefine the virtual function in derived child class
  virtual void hello()
  {
    cout << "parent hello" << endl;
  }
};
class Child : public Parent
{
public:
  void hello() // no need to write virtual keyword in derived class
  {
    cout << "child hello" << endl;
  }
};

int main()
{
  Child child1;
  Parent *ptr; // This pointer points to parent class

  ptr = &child1; // We are binding parent class's pointer to child class's object
                 // // This here is runtime binding, as assignment of address of child 1 will be at runtime.
  ptr->hello();  // Virtual Function
  return 0;
}
