// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;
//     cin >> name;
//     // cout << name;
//     // cout << name[0]; // 0 based indexing hota hai isme by default

//     // /// printing using null character
//     // int index = 0;
//     // while (name[index] != '\0')
//     // {
//     //     cout << name[index];
//     //     index++;
//     // }
//     // cout << endl;
//     // // if input size=5, 6th will be null character so printing it.
//     // cout << "Printing null character:" << name[6 ] << endl;

//     // int value = (int)name[6];
//     // cout << "ASCII of null character" << value;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    string name;
    // using getline function to ignore delimiters
    getline(cin, name);
    cout << name;
    return 0;
}