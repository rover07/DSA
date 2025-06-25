#include <iostream>

using namespace std;

class Person
{
public:
  string name;
  int age;
};

class Student : public Person
{
public:
  int rollNo;
};

class GradStudent : public Student
{
public:
  string researchArea;
};

int main()
{
  GradStudent s1;
  s1.name = "Ronak";
  s1.researchArea = "Biochemistry";
  cout << s1.name;

  cout << s1.researchArea << endl;
  cout << s1.rollNo;
  return 0;
}
