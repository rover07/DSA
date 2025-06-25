// // // Way 1: Using Access Sprcifiers

// // // Way 2: Using Abstract Classes & Pure Virtual Functions/Abstract Functions.
// // Abstract Class: The class which is abstract/definitionless Eg. class Shape, here shape is not defined.
// // Virtual Fxn: same as above but for functions. Eg. draw()

#include <iostream>

using namespace std;

class Shape
{
public:
  virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
  void draw()
  {
    cout << "draw circle\n";
  }
};

class Square : public Shape
{
public:
  void draw()
  {
    cout << "draw square\n";
  }
};
int main()
{
  Circle cir1;
  cir1.draw();

  Square sqr1;
  sqr1.draw();

  // // Below code displays error:cannot declare variable ‘s1’ to be of abstract type ‘Shape’
  // Shape s1;
  // s1.draw();
  return 0;
}
