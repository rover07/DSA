#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter numbers";
    cin >> a >> b;
    cout << "What operations to perform" << endl;
    int operation;
    // char operation;
    cout << "Enter operation number:";
    cin >> operation;
    float ans;

    switch (operation)
    {
    case 1:
        ans = a + b;
        break;
    case 2:
        ans = a - b;
        break;
    case 3:
        a / b;
        break;
    default:
        cout << "Invalid operation";
        return 0;
    }
    cout << ans;
    return 0;
}