#include <iostream>
using namespace std;
int main()
{
    // Implicit type conversion

    // int num1 = 5;
    // float num2 = 9.8;
    // float result = num1 + num2;
    // int result = num1 + num2;
    // cout << num1+num2;

    // char to int
    // char ch = 'B';
    // int idk = ch;
    // int yessir = ch + 1;
    // cout << idk;
    // cout << " " << yessir;

    // //int to char
    // int a=65;
    // char c=a;
    // cout<<c;

    // Explicit type conversion
    // int a = 5;
    // float b = 4.5;
    // float result = a + (int)b;
    // cout << result << endl;
    // cout << a + (int)b;

    // Example:
    int a = 100;
    int b = 9.8;
    float result = a / (float)b;
    cout << result;
    return 0;
}