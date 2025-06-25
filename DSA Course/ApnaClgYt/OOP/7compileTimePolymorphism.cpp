#include <iostream>
using namespace std;

// // // // // Compile Time Polymorphism (The compiler decides which thing to call): Function Overloading
// class Print
// {
// public:
//   void show(int x)
//   {
//     cout << "int: " << x << endl;
//   }
//   void show(char x)
//   {
//     cout << "char: " << x;
//   }
// };

// int main()
// {
//   Print p1;
//   p1.show(101); // Context is of integer
//   p1.show('$'); // Context is of character
//   return 0;
// }

// // // // // Compile Time Polymorphism: Operator Overloading
// // Overloading here means adding the meaning of the Operator

// // Here we are defining the logic/giving meaning to + so it can add complex numbers.
class Complex
{
  int real;
  int img;

public:
  Complex(int r, int i)
  {
    real = r;
    img = i;
  }

  void showNum()
  {
    cout << real << "+" << img << "i\n";
  }
  // // // Since we want to add c2 to c1, we take c2 as argument here
  // // This wont be called unless we make use of "+", which we made in main class()
  //
  //
  // // // // // // Way 1: Using return type as void or anything we normally use

  // void operator+(Complex &c2)
  // {
  //   int resultReal = this->real + c2.real; // here, "this->real" means "real" that belongs to calling object ie. "c1"
  //   int resultImg = this->img + c2.img;

  //   // // sending the results as parameters to the constructor
  //   Complex c3(resultReal, resultImg);
  //   cout << "Result: ";
  //   c3.showNum();
  // }

  // // // // // // Way 2: Using return type as Object name
  Complex operator+(Complex &c2)
  {

    int realNum = this->real + c2.real;
    int imgNum = this->img + c2.img;
    Complex c3(realNum, imgNum);
    cout << "Result: ";
    return c3;
  }
};

int main()
{
  Complex c1(1, 2);
  Complex c2(3, 4);
  c1.showNum();
  c2.showNum();

  // // // Way 1:
  // c1 + c2; // To do operations using operators we have overloaded, we actually have to Use them, thats what we did here.

  // // // Way 2:
  Complex c3 = c1 + c2;
  c3.showNum();
  return 0;
}
