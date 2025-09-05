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
  Parent *ptr; // This pointer points to parent class object

  // Repointing the pointer to object of Child Class

  // // Runtime Binding
  ptr = &child1; // We are binding parent class's pointer to child class's object
                 // // This here is runtime binding, as assignment of address of child1 will be at runtime.
  ptr->hello();  // Virtual Function

  // // Here, is the binding wasnt done, default parent class was there, then the parent's class function would've been called
  return 0;
}
