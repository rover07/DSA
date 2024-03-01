#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        // cout << "Value at index" << i << "is" << v[i] << endl;
        // Another way of printing value at a index
        cout << "Value at index" << i << "is" << v.at(i) << endl;
    }
    cout << endl;
}

int main()
{

    vector<int> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        v.push_back(d);
    }
    fun(v);
    // trying to add additional values in here to check dynamic ability
    for (int i = 0; i < 2; i++)
    {
        int d;
        cout << "Enter extra values to be entered:";
        cin >> d;
        v.push_back(d);
    }
    fun(v);

    v.clear();
    fun(v);
    cout << v.capacity();
    return 0;
}