#include <iostream>
#include <vector>
using namespace std;

void fun(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(33);
    fun(v);
    v.pop_back();
    fun(v);
    v.pop_back();
    fun(v);

    // cout << "The capacity here is: " << v.capacity() << endl;
    // cout << "The size here is: " << v.size();

    return 0;
}