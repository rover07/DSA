#include <iostream>

using namespace std;

class Person
{
public:
  string name;
  int age;

  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
};

class Student : public Person
{
public:
  int rollNo;
  // //just need roll number, else all is defined in base class so using from there
  Student(string name, int age, int rollNo) : Person(name, age)
  {
    this->rollNo = rollNo;
  }

  // ~Student()
  // {

  //   cout << "Destructor of Child Class" << endl;
  // }
  void getInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNo << endl;
  }
};

int main()
{
  Student s1("Vaibhav", 33, 2222);

  s1.getInfo();
  return 0;
}
