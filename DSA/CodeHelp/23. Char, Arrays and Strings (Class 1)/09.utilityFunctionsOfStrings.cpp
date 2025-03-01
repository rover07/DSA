#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    // string name;
    // cin >> name;
    // cout << "Length " << name.length() << endl;
    // cout << "String is empty or not:" << name.empty() << endl;
    // // empty string creation
    // string emptyString = "";
    // cout << "String is empty or not: " << emptyString.empty() << endl;
    // // at()
    // cout << "At " << name.at(0) << endl;

    // // front pe kya hai
    // cout << "Front pe ye hai " << name.front() << endl;
    // // back pe ye hai
    // cout << "Back pe ye hai " << name.back() << endl;
    // // append ie concatenate
    // string str1 = "Vaibhav ";
    // string str2 = "Chauhan";
    // str1.append(str2);
    // cout << str1 << endl; // sirf yaha append hua
    // cout << str2 << endl;

    // // Erasing index
    // string str = "Hi There Everybody";
    // // str.erase(3, 7) << endl;
    // // str.erase(str.begin() + 3);
    // str.erase(str.begin() + 3, str.end() - 5);

    // cout << str << endl;

    // // insert()
    // string name = "Naman Rajput";
    // // name.insert(5, "Kumar");
    // string middle = "Kumar ";
    // name.insert(6, middle);
    // cout << name;

    // // push back
    // string name = "Hello";
    // name.push_back('w');
    // name.pop_back();
    // cout << name;

    // // find
    // string str1 = "there is a pen lying there.";
    // string str2 = "pen";
    // string str3 = "than";
    // cout << str1.find(str2) << endl;
    // cout << str1.find("is");

    // string str1 = "there is a pen lying there.";
    // string str2 = "pens";
    // string str3 = "pens";
    // // find,npos stuff
    // // if (str1.find(str2) == string::npos)
    // // {
    // //     cout << "Not found!";
    // // }
    // // else
    // //     cout << "found!";

    // // compare
    // cout << str1.compare(str2) << endl;
    // cout << str2.compare(str1) << endl;
    // cout << str2.compare(str3) << endl;

    // Substring
    string str = "This is not a substringhhhhhhhhhhhhh";
    cout << str.substr(12, 11);
    return 0;
}