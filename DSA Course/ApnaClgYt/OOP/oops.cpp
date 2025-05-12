#include <iostream>
#include <string>
using namespace std;

class Teacher
{

private:         // //  This is by default, but using it here so I can have below attribute as private
  double salary; // data hiding

public:
  // // //Properties (or) Attributes (or) Data
  string name;
  string dept;
  string subject;
  int age;

  // // //Constructor: They are declared publicly, always.
  // Teacher() // This here is non- parameterised constructor
  // {
  //   age = 19;
  //   cout << "Inside Constructor" << endl;
  // }

  // // // Parameterised Constructor
  // Teacher(string n, string d, string sub, double sal) // This here is parameterised constructor
  // {
  //   cout << "Inside parameterised Constructor" << endl;
  //   name = n;
  //   dept = d;
  //   subject = sub;
  //   salary = sal;
  // }
  // // There can be multiple constructors but the their  parameters should be different

  // // // // This Pointer
  // // // Altering the above parameterised constructor to demonstrate this pointer
  Teacher(string name, string dept, string subject, double salary) // This here is parameterised constructor
  {
    //  Here, it becomes confusing as name on left belongs to what(Object or Parameter) and right one belons to what(Object or Parameter)
    // By using (this ->), we are giving context that the property belongs to Object
    // "this" points to the memory of the object. It is an pointer which is created automatically and points to the "calling object". Here the calling object is : "t1" object for which this constructor is called
    cout << "Inside parameterised Constructor using This pointer" << endl;
    this->name = name;
    this->dept = dept;
    this->subject = subject;
    this->salary = salary;
  }

  //
  // ///Methods (or) Member Functions
  // // These are called member functions because these functions become members of the class
  void changeDept(string newDept)
  {
    dept = newDept;
  }

  // // As salary is private, we can still access and set it using these

  // // Setter function: use to set private values
  void setSalary(double s)
  {
    salary = s;
  }

  // // Getter Function: use to get private values
  double getSalary()
  {
    return salary;
  }

  void getInfo()
  {
    cout << "Name:" << name << endl;
    cout << "Dept:" << dept << endl;
    cout << "Salary:" << salary << endl;
  }
};

int main()
{
  // Object t1 of Teacher
  // Teacher t1;                                                  // constructor is called internally after this object is created.

  // // // Providing values to Object t1
  // t1.name = "Rahul";
  // t1.dept = "ENTC";
  // t1.subject = "Electronics";
  // // t1.salary = 25000; // // Cannot access as this is private
  // t1.setSalary(25000);

  // cout << "Name:" << t1.name << endl;
  // cout << "Salary:" << t1.getSalary() << endl;
  // cout << "Age:" << t1.age; // Default age is 19 due to constructor

  // // // Calling Parameterised Constructor
  Teacher t2("Rover", "Mechanical", "Fluid Dynamics", 100000); // parameterised-constructor is called here. Instead of initializing default values inside constructor, we are passing them as parameters here
  // Even to print values, we can create a function inside the class, here we have used getInfo();
  t2.getInfo();
  return 0;
}
