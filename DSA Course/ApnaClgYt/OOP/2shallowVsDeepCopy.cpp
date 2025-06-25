#include <iostream>

using namespace std;
// // Problem with Shallow Copy: When we use Dynamically Memory ALlocation, the addresses are copied to. Due to this when we make changes in copy of DAM data in an object, its original object's data is changed too
// // Default constructor or copy constructor gives us Shallow Copy

// // Simple story:
// Memory mein jagah create kia dynamically, and stored some values in it
class Student
{
public:
  string name;
  double *cgpaPtr; // Initializing a pointer
  Student(string name, double cgpa)
  {
    this->name = name;
    cgpaPtr = new double; // Pointing the pointer to a new memory(in heap ie. dynamic memory) of type double
    *cgpaPtr = cgpa;      // dereferencing the pointer so we store cgpa as data and not a address.
  }

  Student(Student &obj)
  {
    // this->name = obj.name;

    // this->cgpaPtr = obj.cgpaPtr; // storing adress here. but while printing, we can access the value using dereferencing so no need to worry. Copying address will still point to the same place

    // // // Creating Deep Copy
    this->name = obj.name;
    cgpaPtr = new double;      // creating new memory space
    *cgpaPtr = *(obj.cgpaPtr); // So now instead of storing address, we are storing values directly
    // // In short, 1. Created new memory space
    // // 2. Stored the original value
    // // 3. Now we can make changes as the changes will be made to new memory space
    // // Now even after making changes here, the original object remains intact
  }
  void getInfo()
  {

    cout << "name:" << name << endl;
    cout << "cgpa:" << *cgpaPtr << endl; // Dereferencing so we get value and not address
  }
};

int main()
{
  Student s1("Rahul", 8.12);
  cout << "s1 info before" << endl;
  s1.getInfo();
  cout << "s2 info before" << endl;

  s1.getInfo();
  Student s2(s1);
  s2.name = "Neha";
  *(s2.cgpaPtr) = 9.3; // changing value using dereferencing
  // // We were changing value of s2's pointer, still s1 ka change hua
  // // Therefore making changes in other copied is change the original one too
  cout << "s1 info after" << endl;

  s1.getInfo();
  cout << "s2 info after" << endl;

  s2.getInfo();
  return 0;
}
// s1 info before
//  name:Rahul
//  cgpa:8.12
//  s2 info before
//  name:Rahul
//  cgpa:8.12
//  s1 info after
//  name:Rahul
//  cgpa:8.12
//  s2 info after
//  name:Neha
//  cgpa:9.3
