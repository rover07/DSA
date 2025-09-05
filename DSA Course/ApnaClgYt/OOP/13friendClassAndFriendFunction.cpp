#include <iostream>

using namespace std;

class A
{
  string secret = "secret data";
  friend class B;                   // making a class friend
  friend void revealSecret(A &obj); // making a function friend
};

// // We have to make Class B friend of Class A
class B // friend class
{

public:
  void showSecret(A &obj)
  {
    cout << "Calling function of Friend Class: " << obj.secret << endl;
  }
};

// // Friend Function
void revealSecret(A &obj)
{
  cout << "Calling Friend Function:" << obj.secret;
}
int main()
{
  A a1;
  B b1;
  b1.showSecret(a1); // Calling function of Friend Class
  revealSecret(a1);  // Calling Friend Function
  return 0;
}
