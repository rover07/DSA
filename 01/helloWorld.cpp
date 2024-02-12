#include <iostream>
using namespace std;

int add(int a, int b);

int main()
{
    int a, b, answer;
    cin >> a;
    cin >> b;
    answer = add(a, b);
    cout << "The answer is:" << answer;

    return 0;
}
int add(int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}