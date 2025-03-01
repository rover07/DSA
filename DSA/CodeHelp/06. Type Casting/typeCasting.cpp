#include <iostream>
using namespace std;
int main()
{
    // Implicit type conversion

    // int num1 = 5;
    // float num2 = 9.8;
    // float result1 = num1 + num2;
    // int result2 = num1 + num2;
    // cout << result1 << endl
    //      << result2;

    // // char to int
    // char ch = 'B';
    // int idk = ch;
    // int yessir = ch + 1;
    // cout << idk;
    // cout << " " << yessir;

    // //int to char
    // int a=65;
    // char c=a;
    // cout<<c;

    //    // Explicit type conversion
    // int a = 5;
    // float b = 4.5;
    // float result = a + (int)b;
    // cout << result << endl;
    // cout << a + (int)b;

    // // Example:
    int a = 100;
    int b = 9.8;
    float resultFloat = a / (float)b;
    int resultInt = a / (float)b;
    cout << resultFloat << endl;
    cout << resultInt;
    return 0;
}