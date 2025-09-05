#include <iostream>
using namespace std;
// Static Objects

class Demo
{
public:
  Demo()
  {
    cout << "Constructor created\n";
  }
  ~Demo()
  {
    cout << "Destructor \n";
  }
};

int main()
{

  int a = 0;
  if (a == 0)
  {
    // Demo d1;
    static Demo d1;
  }
  cout << "Code ending\n";
  return 0;
}
// using static, the object stays alive until the code runs irrespective of scope

// // Normal Output: Constructor created, Destructor created, Code ending %
// // After Static: