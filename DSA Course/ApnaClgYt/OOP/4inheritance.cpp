#include <iostream>

using namespace std;

class Person
{
public:
  string name;
  int age;

  Person()
  {
    cout << "First base class is called" << endl;
  }
  ~Person()
  {

    cout << "Destructor of Base Class" << endl;
  }
};

class Student : public Person
{
public:
  int rollNo;
  // //just need roll number, else all is defined in base class so using from there
  Student()
  {
    cout << "Now derived class is called" << endl;
  }

  ~Student()
  {

    cout << "Destructor of Child Class" << endl;
  }
  void getInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << rollNo << endl;
  }
};

int main()
{
  Person p1;

  Student s1;
  s1.name = "Vaibhav";
  s1.age = 22;
  s1.rollNo = 23;
  p1.name = "New"; // This wont change the name, as the base class's constructor is called first setting this value, but after that the derived class's constructor is called renaming the value as "Vaibhav"

  // // In Destructor, when the object is deallocated, first child class's memory is deallocated then parent's
  s1.getInfo();
  return 0;
}



