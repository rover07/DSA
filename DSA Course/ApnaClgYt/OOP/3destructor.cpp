#include <iostream>

using namespace std;

class Student
{
public:
  string name;
  double *cgpaPtr; // These are not freed by default in constructors

  Student(string name, double cgpa)
  {
    cout << "This is constructor\n";
    this->name = name;
    *cgpaPtr = cgpa;
  }
  // // // destructor
  ~Student()
  {
    cout << "I will delete everything\n";
    delete cgpaPtr; // deleting is good because not doing so will waste the memory as its allocated and not being used
    // Problem faced when not deleted: Memory leak
  }

  void getInfo()
  {

    cout << "name:" << name << endl;
  }
};

int main()
{
  Student s1("Rahul", 8.12);
  s1.getInfo();
  return 0;
}